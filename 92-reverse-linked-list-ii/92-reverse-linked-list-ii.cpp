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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head==NULL || head->next==NULL){
            return head;
            }
        ListNode* left_ptr = head;
        ListNode* right_ptr = head ;
        int temp=0;
        while(left<=right){
            int l=left;
            int r=right;
            left_ptr=head;
            right_ptr=head;
            while(l>1){
                l--;
                left_ptr=left_ptr->next;
                
            } 
            while(r>1){
                r--;
                right_ptr=right_ptr->next;
            }
            temp=left_ptr->val;
            left_ptr->val=right_ptr->val;
            right_ptr->val=temp;
            left++;
            right--;
        }
        return head;
    }
};