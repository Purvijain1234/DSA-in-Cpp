/*
==================================================
Problem Number : 0002
Problem Name   : Add Two Numbers
Difficulty     : Medium

Topics
- Linked List
- Math

Pattern
- Linked List Traversal
- Carry Handling

Approach
- Create a dummy node to build the answer list.
- Traverse both linked lists simultaneously.
- Add corresponding digits along with carry.
- Create a new node with (sum % 10).
- Update carry as (sum / 10).
- Continue until both lists and carry are exhausted.

Time Complexity
O(max(n,m))

Space Complexity
O(max(n,m))

Learning
- Use a dummy node to simplify linked list construction.
- Handle carry separately during addition.
- Traverse uneven length linked lists safely.
- Common pattern for linked list arithmetic problems.

==================================================
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                // Dummy node
        ListNode* dummy = new ListNode(0);
        ListNode* temp = dummy;
        int carry = 0;

        // Traverse both linked lists
        while(l1 != NULL || l2 != NULL || carry) {
            int sum = carry;
            // Add value from first list
            if(l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            // Add value from second list
            if(l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            // Update carry
            carry = sum / 10;
            // Create new node
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }
        return dummy->next;
    }
};
