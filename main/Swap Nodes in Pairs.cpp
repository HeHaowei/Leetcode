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
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre = NULL;
        
        //1->2->3->4->5->6
        //2->1>4->3->5->6
        ListNode *new_head = head;;
        
        while (head != NULL && head->next != NULL)
        {
            if (pre != NULL)
            {
                ListNode *nn = head->next;
                pre->next = nn;                
                head->next = nn->next;                
                nn->next = head;
                pre = head;
                head = head->next;
            }
            
            else
            {

                new_head = head ->next;
                head->next = new_head->next;
                new_head->next = head;
                pre = head;
                head = head->next;
            
            }
            
        }
        
        return new_head;
        
    }
};
