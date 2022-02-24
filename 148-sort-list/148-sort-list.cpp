/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* getMid(ListNode* head)
    {
        ListNode *slow = head, *fast = head->next;
        
        while(fast and fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* merge(ListNode* head1, ListNode* head2)
    {
        ListNode *Head = new ListNode();
        ListNode *tail = Head;
        
        while(head1 and head2)
        {
            if(head1->val < head2->val)
            {
                tail->next = head1;
                head1 = head1->next;
            }
            else
            {
                tail->next = head2;
                head2 = head2->next;
            }
            
            tail = tail->next;
        }
        
        if(head1)
            tail->next = head1;
        
        if(head2)
            tail->next = head2;
        
        return Head->next;
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(!head or !(head->next))
            return head;
        
        ListNode *left = head;
        ListNode *right = getMid(head);
        ListNode *temp = right->next;
        right->next = nullptr;
        right = temp;
        
        left = sortList(left);
        right = sortList(right);
        
        return merge(left, right);
    }
};