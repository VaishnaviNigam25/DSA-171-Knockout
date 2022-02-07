/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* curr=head,*slow=head,*fast=head;
        //empty list or single node case
        if(fast==NULL ||fast->next==NULL)
            return false;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
           slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
        return false;
    }
};
