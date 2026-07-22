/*
==================================================
Problem Number : 0026
Problem Name   : Remove Duplicates from Sorted Array
Difficulty     : Easy

Topics
- Array
- Two Pointers

Pattern
- Two Pointers
- In-Place Array Modification

Approach
- Maintain a pointer `k` to track the position of the next unique element.
- Start traversing the array from the second element.
- If the current element differs from the previous one:
  - Place it at index `k`.
  - Increment `k`.
- After traversal, `k` represents the number of unique elements.
- The first `k` elements of the array contain all unique values.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Two pointers are useful for in-place array modifications.
- Since the array is sorted, duplicate elements are adjacent.
- No extra array is required, resulting in constant space.
- The returned length determines the valid portion of the modified array.

==================================================
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};
