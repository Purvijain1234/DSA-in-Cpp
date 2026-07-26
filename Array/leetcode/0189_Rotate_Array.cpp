/*
==================================================
Problem Number : 0189
Problem Name   : Rotate Array
Difficulty     : Medium

Topics
- Array
- Two Pointers

Pattern
- Array Reversal
- In-Place Manipulation

Approach
- Compute k %= n to handle cases where k is greater than the array size.
- Reverse the entire array.
- Reverse the first k elements.
- Reverse the remaining (n - k) elements.
- The array is now rotated to the right by k positions.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Array reversal is an efficient technique for rotation problems.
- Performing three reversals rotates the array without extra memory.
- Always reduce k using modulo to avoid unnecessary rotations.
- In-place algorithms optimize space usage while maintaining linear time.

==================================================
*/

class Solution {
public:
    void reverse(vector<int>& nums, int left, int right) {
        while (left < right) {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;                     // Handle k > n

        reverse(nums, 0, n - 1);    // Reverse whole array
        reverse(nums, 0, k - 1);    // Reverse first k elements
        reverse(nums, k, n - 1);    // Reverse remaining elements
    }
};
