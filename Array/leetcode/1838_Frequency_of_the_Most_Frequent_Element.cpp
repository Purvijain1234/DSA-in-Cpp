/*
==================================================
Problem Number : 1838
Problem Name   : Frequency of the Most Frequent Element
Difficulty     : Medium

Topics
- Array
- Sliding Window
- Sorting
- Prefix Sum
- Greedy

Pattern
- Sliding Window
- Two Pointers
- Sort + Window Expansion

Approach
- Sort the array in non-decreasing order.
- Maintain a sliding window [left, right].
- Keep the sum of elements inside the current window.
- Assume every element in the window is increased to nums[right].
- Required operations:
    nums[right] * window_size - sum
- If required operations exceed k, shrink the window from the left.
- Update the maximum valid window size.

Time Complexity
O(n log n)

Space Complexity
O(1)

Learning
- Sorting groups close values together, making window expansion possible.
- Sliding Window efficiently maintains the longest valid subarray.
- Prefix/window sum avoids recomputing sums repeatedly.
- Converting all elements to the largest element in the window minimizes operations.

==================================================
*/

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long sum = 0;
        int left = 0;
        int ans = 1;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];

            while ((long long)nums[right] * (right - left + 1) - sum > k) {
                sum -= nums[left];
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
