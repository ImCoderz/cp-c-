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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        set<int> orderedSet;
        for(int i=0;i<lists.size();i++){
            if(lists[i]){
                orderedSet.insert(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        ListNode* root=new ListNode();
        for (size_t i = 0; i < orderedSet.size(); i++){
            
        }
        

    }

    ListNode* insertIntoLinkedList(ListNode* head, int val) {
    if (!head) {
        head = new ListNode(val);
    } else {
        ListNode* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = new ListNode(val);
    }
    return head;
    }

    void displayLinkedList(ListNode* head) {
        ListNode* current = head;
        while (current) {
            std::cout << current->val << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main(){

}