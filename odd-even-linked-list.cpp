/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        //if empty list/ only 1 elem/ only 2 elem -->NO CHANGES
        if(!head or !head->next or !head->next->next)
            return head;
            
       ListNode* odd=head,*even =head->next,*oddhead=head,*evenhead=head->next; 
        
        while(even && even->next)
        {
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenhead;
        return head;
    }
};
