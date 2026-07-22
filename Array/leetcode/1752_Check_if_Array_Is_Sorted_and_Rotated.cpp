/*
==================================================
Problem Number : 1752
Problem Name   : Check if Array Is Sorted and Rotated
Difficulty     : Easy

Topics
- Array

Pattern
- Circular Traversal
- Observation

Approach
- Traverse the array once.
- Compare each element with its next element using circular indexing.
- Count the number of positions where:
    nums[i] > nums[(i + 1) % n]
- A sorted and rotated array can have at most one such drop.
- If the count is greater than one, return false.
- Otherwise, return true.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Circular indexing using `(i + 1) % n` helps handle rotations.
- A sorted array has no decreasing pairs.
- A sorted and rotated array has exactly one decreasing pair (or none if not rotated).
- Observation-based solutions can eliminate the need for explicit rotation.

==================================================
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};
