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
     ListNode* reversal(ListNode* head)
     {
        ListNode* curr=head,*prev=NULL,*after=NULL ;
         while(curr!=NULL)
         {
             after=curr->next;
             curr->next=prev;
             prev=curr;
             curr=after;     
         }
        return prev;//THIS WILL BE THE FIRST NODE AFTER REVERSAL OF THE HALF 
         
     }
    void reorderList(ListNode* head) {
        //only 1 or 2 element
        if(head->next == NULL or head->next->next == NULL)
            return ;
        
        //STEP 1 - FIND MIDDLE POINT POINT DIVISION
        ListNode *curr=head,*slow=head,*fast=head->next;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        //REVERSE THE SECOND HALF
        
        ListNode* secondll=reversal(slow->next);
       
        slow->next=NULL;
        
        //MERGE THE TWO HALVES
       curr=head;
        ListNode* after;
        while(curr!=NULL && secondll !=NULL)
        {
            after=curr->next;//2 3
            curr->next=secondll;//1-5 1-5-2-4
            secondll=secondll->next;//4 null
            curr=curr->next;//5 4
            curr->next=after;//1-5-2 1-5-2-4-3
            curr=curr->next;//2 3
        }
        
            
        return ;
    }
};
