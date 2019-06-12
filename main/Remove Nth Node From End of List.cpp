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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         
        
        head = reverseNode(head);
        
        ListNode * current_head = head;
        
        if (n==1) {
            head = head -> next;
            if (head == NULL) return head;
            else return reverseNode(head);
        }
        
            
        while (n > 2)
        {
           
           current_head = current_head->next;
           n--;
            
        }
        
        if (current_head != NULL && current_head -> next != NULL)
        {
            current_head -> next = (current_head -> next) -> next;
        }
        
        head = reverseNode(head);
        
        return head;
        
    }
    
    ListNode *reverseNode(ListNode *head){
        
        ListNode* new_head = head;
        ListNode *pre_node = NULL;
        
        while (head != NULL && head->next != NULL)
        {
            ListNode* new_head = head -> next;
            head -> next = pre_node;
            pre_node = head;
            head = new_head;
        }

        head -> next = pre_node;
        
        return head;
        
    }
};
