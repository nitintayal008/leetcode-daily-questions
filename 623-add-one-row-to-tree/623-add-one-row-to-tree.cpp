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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1)
        {
            TreeNode* newNode = new TreeNode(val);
            newNode -> left = root;
            return newNode; 
        }
        
        queue<TreeNode*>q;
        int count=0;
        q.push(root);
        while(!q.empty()){
            count++;
            int n=q.size();
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                
                if(count!=depth-1){
                    if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                 }  
                }
                else{
                    TreeNode* temp1=new TreeNode(val);
                    temp1->left=temp->left;
                    temp->left=temp1;
                    
                    TreeNode* temp2=new TreeNode(val);
                    temp2->right=temp->right;
                    temp->right=temp2;
                }
                
            }
        }
        return root;
    }
};