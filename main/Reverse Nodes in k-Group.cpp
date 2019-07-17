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
    ListNode* reverseKGroup(ListNode* head, int k) {

    	int num = 0;
    	ListNode* point = head;
    	while (point != NULL) {
    		point = point -> next;
    		num++;
    	}

        if (num < k) return head;
        ListNode* current = head;
    	ListNode* pre = NULL;
    	ListNode* next;
    	vector <ListNode*> reverseList = reverseOneKGroup(pre,head,k);
    	num -= k;

    	ListNode *new_head = reverseList[0];
    	pre = reverseList[1];
    	head = pre -> next;

    	while (head != NULL && num >= k) {

    		reverseList = reverseOneKGroup(pre, head, k);
    		pre -> next = reverseList[0];
    		pre = reverseList[1];
    		head = pre -> next;
    		num = num - k;

    	}

    	return new_head;
        
    }

    vector<ListNode*> reverseOneKGroup(ListNode* pre, ListNode* head, int k) {

    	int num = 0;
    	ListNode* current = head;
    	ListNode* next;

    	while (num < k && current != NULL ) {
    		next = current -> next;
    		current -> next = pre;
    		pre = current;
    		current = next;
    		num++;
    	}

    	head -> next = next;
    	vector<ListNode*> pAndh;
    	pAndh.push_back(pre);
    	pAndh.push_back(head);
    	return pAndh;     
    }

};
