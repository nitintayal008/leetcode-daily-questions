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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL || root==p || root==q)
            return root;
        
         TreeNode* left=lowestCommonAncestor(root->left,p,q);
         TreeNode* right=lowestCommonAncestor(root->right,p,q);
        
        if(left==NULL){
            return right;
        }else 
        if(right==NULL){
            return left;
        }else
        {
            return root;
        }
    }
};
//this below solution is more intresting solution in o(H) time.
//
// Let large = max(p.val, q.val), small = min(p.val, q.val).
// We keep iterate root in our BST:
// If root.val > large then both node p and q belong to the left subtree, go to left by root = root.left.
// If root.val < small then both node p and q belong to the right subtree, go to right by root = root.right.
// Now, small <= root.val <= large the current root is the LCA between q and p.
// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         int small = min(p->val, q->val);
//         int large = max(p->val, q->val);
//         while (root != nullptr) {
//             if (root->val > large) // p, q belong to the left subtree
//                 root = root->left;
//             else if (root->val < small) // p, q belong to the right subtree
//                 root = root->right;
//             else // Now, small <= root.val <= large -> This root is the LCA between p and q
//                 return root;
//         }
//         return nullptr;
//     }
//};