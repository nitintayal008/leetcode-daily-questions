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
        vector<vector<int>>ans;
        
        if(root==NULL)return ans;
        bool flag=true;
        queue<TreeNode*>q;
        q.push(root);
       while(!q.empty()){
           vector<int>ans1;
           int n=q.size();
           for(int i=0;i<n; i++){
               TreeNode* temp=q.front();
               q.pop();
               if(temp->left){
                   q.push(temp->left);
               }
               if(temp->right){
                   q.push(temp->right);
               }
               ans1.push_back(temp->val);
               
           }
           if(flag==true){
               ans.push_back(ans1);
               flag=false;
           }else{
               reverse(ans1.begin(),ans1.end());
               ans.push_back(ans1);
               flag=true;
           }
       }
        return ans;
    }
};