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
        
        ListNode* dummy = new ListNode(101, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        for(int i = 0; i < n; ++i)
        {
            if(fast)
                fast = fast->next;
        }
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next;
        }
        // slow->next = slow->next != nullptr ? slow->next->next : nullptr;
        slow->next = slow->next->next;

        return dummy->next;
    }
};