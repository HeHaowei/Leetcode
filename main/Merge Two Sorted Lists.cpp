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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head = NULL;
        ListNode *pre = NULL;

        while (l1 != NULL || l2 != NULL)
        {
            if (l1 != NULL && l2 != NULL)
            {
                if (l1->val < l2->val)
                {
                  if (head == NULL) 
                    {
                        head = l1;
                        pre = l1;
                        l1 = l1 -> next;
                    }
                    else
                    {
                        pre -> next = l1;  
                        l1 = l1 -> next;
                        pre = pre -> next;
                    }
                }

                else
                {
                    if (head == NULL) 
                    {
                        head = l2;
                        pre = l2;
                       l2 = l2 -> next;
                    }
                    else
                    {
                        pre -> next = l2;  
                        l2 = l2 -> next;
                        pre = pre -> next;
                    } 
                }
            }


                else if (l2 == NULL)
                {
                    if (head == NULL) 
                    {
                        head = l1;
                        pre = l1;
                        l1 = l1 -> next;
                    }
                    else
                    {
                        pre -> next = l1;  
                        l1 = l1 -> next;
                        pre = pre -> next;
                    }

                }

                else
                {
                   if (head == NULL) 
                    {
                        head = l2;
                        pre = l2;
                       l2 = l2 -> next;
                    }
                    else
                    {
                        pre -> next = l2;  
                        l2 = l2 -> next;
                        pre = pre -> next;
                    } 
                }

        }

        return head;

    }
};
