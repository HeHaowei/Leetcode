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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head = new ListNode(0);
        ListNode *pre = head;
        int pass = 0;    
        while (l1 != NULL || l2 != NULL || pass!=0)
        {
            
            int p;
            if (l1 == NULL && l2 ==NULL)
            {
                p = pass;
            }
            else if (l1 == NULL) 
            {
                p = pass + l2->val;
                l2 = l2->next;
            }
            else if (l2 == NULL) 
            {
                p = pass + l1 -> val;
                l1 = l1->next;
            }
            else 
            {
                p = pass + l1->val + l2->val;
                l1 = l1->next;
                l2 = l2 ->next;
            }
            
            ListNode *nextnode = new ListNode(p%10);
            pass = p/10;
            pre -> next = nextnode;
            pre = pre -> next;
            
            
           
        }
        
        return head->next;
    }
};
