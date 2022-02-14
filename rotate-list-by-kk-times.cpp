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
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL or head->next==NULL or k==0)
            return head;
        int size=1;
        ListNode* curr=head;
        while(curr->next!=NULL)//to get the size of ll and get the last node in curr
        {
            curr=curr->next;
           size++;
            
        }
        curr->next=head;//made it a circular ll
    
            // k is the resultant no of rotations to be done
           k=k%size;
        //k is the point at which the we will get the head of the new linklist
           k=size-k;
          
            
           while(k--)
           {
               curr=curr->next; 
           }
        
            //storing the head of rotated  list
            head=curr->next;
        //converting circular ll to singly ll
            curr->next=NULL;
            
            return head;
        }
        
        
    
};
