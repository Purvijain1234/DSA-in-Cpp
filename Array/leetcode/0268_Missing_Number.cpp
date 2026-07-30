/*
==================================================
Problem Number : 0268
Problem Name   : Missing Number
Difficulty     : Easy

Topics
- Array
- Math
- Hash Table
- Bit Manipulation

Pattern
- Mathematical Formula
- Summation

Approach
- Let n be the size of the array.
- Compute the expected sum of numbers from 0 to n using:
    n × (n + 1) / 2
- Traverse the array and calculate the actual sum.
- The missing number is:
    expectedSum - actualSum
- Return the missing number.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- The sum of the first n natural numbers is n × (n + 1) / 2.
- Comparing the expected and actual sums quickly identifies the missing value.
- Mathematical formulas can often replace extra data structures.
- This problem also has XOR and Hash Set solutions.

==================================================
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total = (n * (n + 1)) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        return total - sum;
    }
};
