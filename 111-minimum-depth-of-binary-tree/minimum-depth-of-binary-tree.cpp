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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;

        std::queue<TreeNode*> queue;
        queue.push(root);
        int level = 1;

        while (!queue.empty()) {
            int levelSize = queue.size();

            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = queue.front();
                queue.pop();

                if (node->left == nullptr && node->right == nullptr) {
                    return level;
                }

                if (node->left != nullptr) {
                    queue.push(node->left);
                }

                if (node->right != nullptr) {
                    queue.push(node->right);
                }
            }

            level++;
        }

        return level;
    }
};