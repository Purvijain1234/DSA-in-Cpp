/*
==================================================
Problem Number : 1929
Problem Name   : Concatenation of Array
Difficulty     : Easy

Topics
- Array
- Simulation

Pattern
- Array Traversal
- Array Construction

Approach
- Determine the size of the input array.
- Create a new array of size 2 × n.
- Traverse the original array once.
- Copy each element:
  - To the current index.
  - To the index offset by n.
- Return the newly constructed array.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- Creating a new array is useful when the output size differs from the input.
- Index shifting (`i + n`) is a common technique for concatenation problems.
- A single traversal is sufficient to duplicate the array.
- Simulation problems often involve directly following the required operations.

==================================================
*/

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(2 * n);

        for (int i = 0; i < n; i++) {
            temp[i] = nums[i];
            temp[i + n] = nums[i];
        }

        return temp;
    }
};
