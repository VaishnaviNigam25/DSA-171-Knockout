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
    ListNode *detectCycle(ListNode *head) {
        
        //if empty list or 1 elem list or 2 elem without cycle
        if(head==NULL or head->next==NULL or head->next->next==NULL)
            return NULL;
            
        ListNode* curr=head,*slow=head,*fast=head;
        //STEP 1 - FIND IF CYCLE EXIST  [ floyd's algo]
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next; //1 STEP FORWARD
            fast=fast->next->next; //2 STEP FORWARD
            //if cyccle found,immediately break
            if(slow==fast)
                break;
        }
        
        //IF NO CYCLE FOUND,RETURNS NULL
        if(slow!=fast)
            return NULL;
        
        //FIND THE START POINT
        else
       {
        slow=head;
        while(slow!=fast)
        {
            slow=slow->next;//1 STEP FORWARD
            fast=fast->next;//1 STEP FORWARD
            if(slow==fast)
                break;
        }
         return slow;  
       }
    }
};
