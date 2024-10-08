/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if (root == nullptr) return 0; 
        std::queue<TreeNode*> q; 
        q.push(root);
        int sum = 0;

        while (!q.empty()) {
            int levelSize = q.size();  
            sum = 0;  // Reset sum at the start of each level
            
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                
                sum += node->val;  // Sum nodes at the current level
                
                if (node->left) q.push(node->left);  // Add left child to queue
                if (node->right) q.push(node->right);  // Add right child to queue
            }
        }
        return sum;  // The sum after processing the last level is the answer
    }
};
