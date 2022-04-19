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
       void solve(TreeNode *temp, int &num)
    {
        if(temp == NULL)
            return;
        solve(temp->right, num);
        temp->val = num + temp->val;	
        num = temp->val;
        solve(temp->left, num);
    }
    
    TreeNode* convertBST(TreeNode* root) 
    {
        int num = 0;
        TreeNode*temp=root;
        solve(temp, num);
        return root;
    }
};