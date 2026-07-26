/*
==================================================
Problem Number : 0876
Problem Name   : Middle of the Linked List
Difficulty     : Easy

Topics
- Linked List
- Two Pointers

Pattern
- Array Storage
- Index Calculation

Approach
- Traverse the linked list and store each node in a vector.
- After traversal, calculate the middle index as:
    nodes.size() / 2
- Return the node at the middle index.
- If there are two middle nodes, integer division automatically
  selects the second middle node.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- A vector can store pointers to linked list nodes for easy indexing.
- Integer division helps directly compute the middle position.
- This solution is simple but requires extra space.
- An optimized approach uses slow and fast pointers with O(1) space.

==================================================
*/

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> nodes;

        while (head != nullptr) {
            nodes.push_back(head);
            head = head->next;
        }

        return nodes[nodes.size() / 2];
    }
};
