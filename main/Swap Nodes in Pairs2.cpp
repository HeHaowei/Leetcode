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
        ListNode* current = head;
        if (head == NULL) return head;
        ListNode* next_node = head -> next;
        while (next_node != NULL) {
            next_node = next_node -> next;
            (current -> next) -> next = current;
            if (pre != NULL) {
                pre -> next = current -> next;
            }
            else {
                head = current -> next;
            }
            pre = current;
            current = next_node;
            if (next_node == NULL || next_node -> next == NULL) {
                pre -> next = next_node;
                return head;
            } else {
                next_node = next_node -> next;
            }
            
        }
        return head;
        
    }
};
