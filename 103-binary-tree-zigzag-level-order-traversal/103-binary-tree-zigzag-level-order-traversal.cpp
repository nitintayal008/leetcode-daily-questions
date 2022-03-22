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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
        {
            return { };
        }
        vector<vector<int>> result; //To store the final traversals
        queue<TreeNode*> q; //To perform level order traversal and store the nodes level wise
        q.push(root);
        vector<int> l = {root->val};
        result.push_back(l); 
        int flag = 0; //Variable to keep a check on levels so as to perfom reversal
        while(!q.empty())
        {
            int s = q.size();
            vector<int> level;
            for(int i=0; i<s; i++)
            {
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
    	        {
    	            level.push_back(node->left->val);
    	            q.push(node->left);
    	        }
    	        if(node->right)
    	        {
    	            level.push_back(node->right->val);
    	            q.push(node->right);
    	        }
            }
            if(flag==0) //If it's an odd row number(1, 3...) (assuming row numbering is from 0)
            {
                reverse(level.begin(), level.end()); //We reverse that row
                flag = 1; //We change the flag parity
            }
            else //We do nothing
            {
                flag = 0; //We change the flag parity
            }
            if(!level.empty()) //We check whether the level is having certain values
            {
                result.push_back(level); //We push the level into the result matrix
            }
        }
        return result;
    }
};