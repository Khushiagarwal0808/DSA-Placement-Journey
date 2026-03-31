/*
Problem: Reverse Linked List
Platform: LeetCode
Difficulty: Easy

Approach:
- Use three pointers: prev, curr, next
- Reverse links one by one

Time Complexity: O(n)
Space Complexity: O(1)
*/

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL) {
            ListNode* next = curr->next; // store next
            curr->next = prev;           // reverse link
            prev = curr;                 // move prev
            curr = next;                 // move curr
        }

        return prev;
    }
};
