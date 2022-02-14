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
    
     ListNode* findMid(ListNode* head) {
          ListNode* slow = head;
         ListNode*fast = head->next;
          while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
     //slow will be at the middle point  
     return slow;
     }
    ListNode* sortList(ListNode* head) {
        //base case when the list has only 1 node or 0
        if (head == NULL || head->next == NULL)
            return head;
        
        // find the middle point for division of both list
         ListNode* mid = findMid(head);
        
        ListNode* left = head; // the left list will be from the start (head)
        ListNode* right = mid->next;//right list will be after the middle point
        mid->next = NULL;//to break the list into two halves,separting from between
        
        
        //recurrsive calls to left part until 1 elem
        left = sortList(left);
        
          //recurrsive calls to right part until 1 elem
        right = sortList(right);
       
        //finally calling the merge function
        return merge(left, right);
    }
    
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        // ListNode* dump = new ListNode();  dynamic memory allocation
        // ListNode* curr = dump;
        
        ListNode dummy(0);//static memory allocation
       ListNode* cur = &dummy;
        
        //until both list have elements
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
                cur = cur->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
                cur = cur->next;
            }
                
            
        }
        
        if (l1 != NULL)
            cur->next = l1;
        else
            cur->next = l2;
         
        //returning the head of sorted list
        return dummy.next;
    }
};
