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
    ListNode* middle(ListNode* head)
    {
    ListNode* curr=head,*slow=head,*fast=head->next;
       
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;//this is the middle
    }
    
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
    bool isPalindrome(ListNode* head) {
        if( head->next==NULL)
            return true;
        
         //STEP 1 - FIND MID
        ListNode* mid = middle(head);
        
        
        //STEP 2 - REVERSE LATER HALF and connect with the middle
        mid->next=reversal(mid->next);
        
        //STEP 3- CHECK BOTH THE HALVES
        ListNode* curr=head;
        mid=mid->next;
        while(mid!=NULL)
        {
            if(curr->val !=mid->val)
                return false;
            curr=curr->next;
            mid=mid->next;
        }
        
        return true;
    }
};
