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
    bool isPalindrome(ListNode* head) {
        auto fast = head;
        auto slow = head;
        int len = 0;
        while(fast != NULL && fast->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
            len++;
        }
        if(fast != NULL) {
            slow = slow->next;            
        }
        auto newPtr = reverseList(head, len);
        while(len--) {
            if(slow->val != newPtr->val) {
                return false;
            }
            slow = slow->next;
            newPtr = newPtr->next;
        }
        return true;
    }
    
    ListNode *reverseList(ListNode *head, int len) {
        ListNode *next = NULL, *prev = NULL, *curr = head;
        while(len--) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};
