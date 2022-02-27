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
    int widthOfBinaryTree(TreeNode* root) {
        unsigned maxWidth = 0;
        queue<pair<TreeNode*, unsigned>> q; 
        q.emplace(root, 1);

        while (!q.empty()) {
            int size = q.size();
            unsigned left = q.front().second;
            for (int i = 0; i < size; ++i) {
                auto cur = q.front();
                unsigned curNo = cur.second;
                q.pop();
                if (i == size - 1) {
                    maxWidth = max(curNo - left + 1, maxWidth);
                }
                if (cur.first->left) {
                    q.emplace(cur.first->left, curNo * 2 + 1);
                }
                if (cur.first->right) {
                    q.emplace(cur.first->right, curNo * 2 + 2);
                }
            }
        }
        return maxWidth;
    }
};