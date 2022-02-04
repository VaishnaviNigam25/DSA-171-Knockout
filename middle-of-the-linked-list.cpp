class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow = head;
        ListNode* fast = head;
        int count=0;
        
        while(fast!=NULL && fast->next!=NULL)
        {
           slow = slow->next;
            fast = fast->next->next;
            count++;
        }
        
            return slow;
    }
};
