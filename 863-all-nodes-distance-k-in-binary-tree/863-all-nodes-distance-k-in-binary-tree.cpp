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
    void dfs(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&parent){
        queue<TreeNode*>q;
        q.push(root);
        //vector<parent>pt;
        while(!q.empty()){
            //int size=q.size();
            
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    parent[temp->left]=temp;
                    q.push(temp->left);
                }
                if(temp->right){
                    parent[temp->right]=temp;
                    q.push(temp->right);
                }
        }
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        dfs(root,parent);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int level=0;
        while(!q.empty()){
            int size=q.size();
            if(level++ ==k)break;
            for(int i=0; i<size; i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right && !visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                if(parent[curr] && !visited[parent[curr]]){
                    q.push(parent[curr]);
                    visited[parent[curr]]=true;;
                }
            }
        }
        vector<int>result;
        while(!q.empty()){
            TreeNode* curr=q.front();q.pop();
            result.push_back(curr->val);
        }
        return result;
    }
};