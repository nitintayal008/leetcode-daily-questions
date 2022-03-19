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
    void markBothside(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parent,TreeNode* target){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left) {
                parent[temp->left]=temp;
                q.push(temp->left);
                }
            if(temp->right){
                parent[temp->right]=temp;
                q.push(temp->right);
            }
            
        }
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        //first we will make tree such that it travere in both the direction
        //so for that we will use unorderd_map to store double sided link 
        unordered_map<TreeNode*,TreeNode*>parent;
        markBothside(root,parent,target);
        unordered_map<TreeNode*, bool>vis;
        //after we get link to both side we will start from the target and go in all the three direction and count the distance ...for that we will maintain visited array so we can go in respected dirction
        queue<TreeNode*>q;
        q.push(target);
        vis[target]=true;
        int count=0;
        while(!q.empty()){
            int size=q.size();
            if(count++ ==k)break;
            // count++;
            
            for(int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left]=true;
                }
                if(curr->right && !vis[curr->right]){
                    q.push(curr->right);
                    vis[curr->right]=true;
                }
                if(parent[curr] && !vis[parent[curr]]){
                    q.push(parent[curr]);
                    vis[parent[curr]]=true;
                }
            }
           
        }
        vector<int>ans;
        while(!q.empty()){
            TreeNode* curr = q.front();
            q.pop();
            ans.push_back(curr->val);
        }
        return ans;
    }
        
};