/*
==================================================
Problem Number : 0283
Problem Name   : Move Zeroes
Difficulty     : Easy

Topics
- Array
- Two Pointers

Pattern
- Two Pointers
- In-Place Swapping

Approach
- Maintain a pointer `j` to track the position where the next non-zero element should be placed.
- Traverse the array from left to right.
- Whenever a non-zero element is found:
  - Swap it with the element at index `j`.
  - Increment `j`.
- By the end of the traversal:
  - All non-zero elements are moved to the front while preserving their order.
  - All zeroes automatically move to the end.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Two pointers help perform in-place array modifications efficiently.
- Swapping avoids using an extra array.
- The relative order of non-zero elements is preserved.
- This is a common partitioning technique used in array problems.

==================================================
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
