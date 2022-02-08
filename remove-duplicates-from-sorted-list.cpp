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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return head;
      ListNode* prev=head,*curr=head;
        while(curr!=NULL)
        {
                //if node is duplicate
            
            if(curr->next!=NULL && curr->val==curr->next->val)
                curr=curr->next;
            
            //if node is not duplicate
            else
            {
            prev->next=curr->next;
            prev=curr->next;
                curr=prev;
            }
        }
        return head;
    }
};
