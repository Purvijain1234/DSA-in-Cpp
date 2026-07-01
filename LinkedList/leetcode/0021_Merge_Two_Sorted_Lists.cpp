/*
==================================================
Problem Number : 0021
Problem Name   : Merge Two Sorted Lists
Difficulty     : Easy

Topics
- Linked List
- Recursion

Pattern
- Dummy Node
- Two Pointers
- Merge Process

Approach
- Create a dummy node to simplify list construction.
- Compare the current nodes of both linked lists.
- Attach the smaller node to the merged list.
- Move the corresponding pointer forward.
- Continue until one list is exhausted.
- Attach the remaining nodes of the non-empty list.

Time Complexity
O(n + m)

Space Complexity
O(1)

Learning
- Dummy node eliminates special handling for the head node.
- Two pointers help merge two sorted sequences efficiently.
- Reuse existing nodes instead of creating new ones.
- Classic merge technique used in Merge Sort.

Revision Notes
1. Create a dummy node.
2. Compare list1->val and list2->val.
3. Attach the smaller node.
4. Move temp and the corresponding list pointer.
5. Attach the remaining nodes.

Examples

list1 = [1,2,4]
list2 = [1,3,4]

Output = [1,1,2,3,4,4]

==================================================
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // dummy node
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        //compare
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = list1;
                list1 = list1->next;
            }
            else{
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        // remaining node
        if(list1 != NULL){
            temp->next = list1;
        }
        else{
            temp->next = list2;
        }
        return dummy->next;
    }
};
