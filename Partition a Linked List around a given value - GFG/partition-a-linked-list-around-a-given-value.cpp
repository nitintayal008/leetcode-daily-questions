// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node* partition(struct Node* head, int x);

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to print linked list */
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void) {
    int t;
    cin >> t;

    while (t--) {
        struct Node* head = NULL;
        struct Node* temp = NULL;
        int n;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (i == 0) {
                head = new Node(value);
                temp = head;
            } else {
                temp->next = new Node(value);
                temp = temp->next;
            }
        }

        int k;
        cin >> k;

        // Solution ob;

        head = partition(head, k);
        printList(head);
    }

    return (0);
}
// } Driver Code Ends


// User function Template for C++

/*struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};*/

struct Node* partition(struct Node* head, int x) {
    // create three dummy nodes
    Node* left = new Node(0);
    Node* right = new Node(0);
    Node* equal = new Node(0);
    
    Node* ltail = left;
    Node* rtail = right;
    Node* etail = equal;
    
    Node* curr = head;
    
    while(curr) {
        // if current node value is less than 'x', add them to ltail nodes. same goes for three other nodes too.
        if(curr -> data < x) {
            ltail -> next = curr;
            ltail = ltail -> next;
        }
        else if(curr -> data == x) {
            etail -> next = curr;
            etail = etail -> next;
        }
        else {
            rtail -> next = curr;
            rtail = rtail -> next;
        }
        curr = curr -> next;
    }
    
    // last node(i.e right end node points to NULL)
    rtail -> next = NULL;
    etail -> next = right -> next;
    ltail -> next = equal -> next;
    
    return left -> next;
}