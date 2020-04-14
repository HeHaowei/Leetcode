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
    vector<int>result;
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        TreeNode* temp = root;
        stack<TreeNode* > nstack;
        
        while (temp || !nstack.empty()) {
            if (temp) {
                nstack.push(temp);
                temp = temp -> left;
            }
            else {
                temp = nstack.top();
                nstack.pop();
                result.push_back(temp->val);
                temp = temp -> right;
            }
        }

        
        return result;

    }
//     vector<int> inorderTraversal(TreeNode* root) {
//         TreeNode* temp = root;
//         if (temp == NULL) return result;
//         stack<TreeNode* > nstack;
//         nstack.push(temp);
//         while (!nstack.empty()) {
//             temp = nstack.top();
//             while (temp -> left != NULL) {
//                 TreeNode* ctemp = temp -> left;
//                 temp -> left = NULL;
//                 temp = ctemp;
//                 nstack.push(temp);
//             }
//             result.push_back(temp->val);
//             nstack.pop();
//             if (temp -> right != NULL) nstack.push(temp -> right);
//         }
        
//         return result;

//     }
    
    // vector<int>result;
    // vector<int> inorderTraversal(TreeNode* root) {
    //     if (root != NULL) {
    //         inorderTraversal(root -> left);
    //         result.push_back(root -> val);
    //         inorderTraversal(root -> right);
    //     }
    //     return result;
    // }
};
