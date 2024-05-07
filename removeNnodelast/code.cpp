#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode* result=head;
        ListNode* second=head;
        
        while(head){
            count++;
            head=head->next;
            if(!head || !head->next){
                if(second->next){
                    ListNode* temp;
                    if(count>=n){
                        temp = second->next;
                        second->next = second->next->next; 
                    }else{
                        temp=second;
                        return second->next;
                    }
                }else{
                    return nullptr; 
                }
                break;
            }
            if(count>=n){
                second=second->next;
            }

        }
        return result;
    }
};