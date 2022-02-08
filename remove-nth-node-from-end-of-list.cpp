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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        ListNode* curr=head;
        
        //FIRST KNOW THE LENGTH OF LL
            while(curr!=NULL)
                  {
                      size++;
                      curr=curr->next;
                  }
        //IF SIZE IS 1 AND THAT HAS TO BE REMOVED SO RETURN EMPTY LIST
        //if(size==1 and n==1)
         //   return NULL;
        
      
        int target=size-n-1; //FIND THE LOCATION TO BE DELETED
        //IF ITS THE FIRST ELEMENT THEN SHIFT THE HEAD TO NEXT POSITION
        if(target<0)
        {
            head=head->next;
            return head;
        }
            else{
                curr=head;
                //TRAVERSE TO 1 STEP PREVIOUS OF THE LOCATION
                while(target--)
                  {
                      curr=curr->next;
                  }
             //MANIPULATE THIS BY DELETING THE LINK , AND SKIPING THE INDEX (REMOVING FROM THE LIST)  
        curr->next=curr->next->next;
        }
        
        
        return head;
        
    }
};
