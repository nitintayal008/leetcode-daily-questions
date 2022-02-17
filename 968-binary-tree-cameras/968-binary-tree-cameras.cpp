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
    int camera=0;
    int helper(TreeNode* root){
        if(root==NULL)
            return 1;
        
        int lc=helper(root->left);
        int rc=helper(root->right);
        
        if(lc==-1 || rc==-1){
            camera++;
            return 0;
        }
        if(lc==0||rc==0)//agr mera lc ya rc ke pas camera hua toh ma toh ocver hogya na
            return 1;
        
        return -1;
    }
    int minCameraCover(TreeNode* root) {
        //we will simplly iterate over postorder i.e. from bottom and we will take care of 
        //three major points:
        //we need camera when we have leaf node
        //if u need  camera ---->-1
        //if u have a camera---->0
        //if u are covered by camera---->1
        //and we will count if we need camera
        
        if(helper(root)==-1)
            camera++;
        
        return camera;
        
    }
};