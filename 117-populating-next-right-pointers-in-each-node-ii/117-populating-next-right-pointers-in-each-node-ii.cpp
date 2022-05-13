/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
     Node* connect(Node* root) 
    {
        if(root==NULL) return NULL;
        queue<Node *> q;
        q.push(root);
        while(q.size()!=0)
        {
            int size=q.size();
            while(size--)
            {
                Node *tmp=q.front();
                q.pop();
                if(size) tmp->next=q.front();  // point next element present in queue
                else tmp->next=NULL; // if no element present in queue point to NULL
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
            }
        }
        return root;
    }
};