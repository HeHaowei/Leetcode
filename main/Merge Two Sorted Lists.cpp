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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    
        int size_list = lists.size();
        if (size_list == 0) return NULL;
        else 
            if (size_list == 1) return ((*lists.begin()));
        else 
            if (size_list == 2)
            {
                ListNode* list1 = lists[0];
                ListNode* list2 = lists[1];
                ListNode* newlist = NULL;
                ListNode* pre;
                
                while (list1 != NULL || list2 != NULL)
                {
                    if (list1 == NULL)
                    {
                       if (newlist == NULL) {
                           newlist = list2;
                           //pre = list2;
                           break;
                       }
                       
                        else
                        {
                            pre->next = list2;
                            //list2 = list2 ->next;
                            //pre = pre->next;
                            break;
                        }
                        
                        
                    }
                    
                    else if (list2 == NULL)
                    {
                        if (newlist == NULL) {
                           newlist = list1;
                           //pre = list1;
                           break;
                       }
                       
                        else
                        {
                            pre->next = list1;
                            //list1 = list1->next;
                            //pre = pre->next;
                            break;
                        }
                    }
                    
                    else
                    {
                        if (list1->val <= list2->val)
                        {
                            if (newlist == NULL)
                            {
                                newlist = list1;
                                pre = list1;
                                list1 = list1->next;
                            }
                            else
                            {
                                pre->next = list1;
                                list1 = list1->next;
                                pre = pre->next;
                            }
                        }
                        
                        else
                        {
                            if (newlist == NULL)
                            {
                                newlist = list2;
                                pre = list2;
                                list2 = list2->next;
                            }
                            else
                            {
                                pre->next = list2;
                                list2 = list2->next;
                                pre = pre->next;
                            }
                        }
                    }
                }
                
                return newlist;
                
                
            }
        
        else 
        {
            vector<ListNode*>left_half;
            for (int i=0; i<size_list/2;i++) left_half.push_back(lists[i]);
            lists.erase(lists.begin(),lists.begin() + size_list/2);
            vector<ListNode*> new_lists;
            new_lists.push_back(mergeKLists(left_half));
            new_lists.push_back(mergeKLists(lists));
            return mergeKLists(new_lists);
        }
    }
    
    
};
