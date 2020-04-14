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
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        TreeNode* temp = root;
        stack<TreeNode* > nstack;
        while (temp || !nstack.empty()) {
            if (temp) {
                result.push_back(temp -> val);
                if (temp -> right) nstack.push(temp -> right);            
                temp = temp -> left;                
            }
            else {
                temp = nstack.top();
                nstack.pop();
            }
        }
        
        return result;
        
    }
    
    
//     vector<int> preorderTraversal(TreeNode* root) {
//         if (root != NULL) {
//             result.push_back(root->val);
//             preorderTraversal(root -> left);
//             preorderTraversal(root -> right);
//         }
        
//         return result;
        
//     }
};
