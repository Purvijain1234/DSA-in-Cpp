/*
==================================================
Problem Number : 1480
Problem Name   : Running Sum of 1d Array
Difficulty     : Easy

Topics
- Array
- Prefix Sum

Pattern
- Prefix Sum
- In-Place Computation

Approach
- Traverse the array from the second element.
- Add the previous element's running sum to the current element.
- Store the updated value back into the same array.
- Continue until the end of the array.
- Return the modified array containing running sums.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Prefix Sum stores the cumulative sum of elements.
- In-place computation avoids using extra memory.
- Running Sum is a fundamental technique used in many range query problems.
- Each element depends only on the previous cumulative sum.

==================================================
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }

        return nums;
    }
};
