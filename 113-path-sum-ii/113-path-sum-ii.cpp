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
    //vector<vector<int>> ans;
    void dfs(TreeNode* node, vector<int>& path, int remainingSum,vector<vector<int>> &ans) {
      
        if (!node) return;
       
        path.push_back(node-> val);
        if (!node->left && !node->right && remainingSum == node->val) ans.push_back(path);
      
        dfs(node-> left, path, remainingSum - node-> val,ans);
      
        dfs(node-> right, path, remainingSum - node-> val,ans);
        
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>> ans;
        vector<int> path;
       
        dfs(root, path, targetSum,ans);
        return ans;  
    }
};