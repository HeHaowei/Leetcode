/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> result;
    
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*>nstack;
        TreeNode* temp = root;
        TreeNode* pre = NULL;
        while (temp || !nstack.empty()) {
            if (temp) {
                nstack.push(temp);
                temp = temp -> left;
            } 
            else {
                temp = nstack.top();
                if (temp -> right != NULL && temp -> right != pre) {
                    temp = temp -> right;
                }
                else {
                    result.push_back(temp->val);
                    pre = temp;
                    nstack.pop();
                    temp = NULL;
                }
                
            }

            
        }
        
        return result;
        
    }
    
//     vector<int> postorderTraversal(TreeNode* root) {
        
//         if (root) {
//             postorderTraversal(root -> left);
//             postorderTraversal(root -> right);
//             result.push_back(root -> val);
//         }
        
//         return result;
        
//     }
};
