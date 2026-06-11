/*
==================================================
Problem Number : 0066
Problem Name   : Plus One
Difficulty     : Easy

Topics
- Array
- Math

Pattern
- Carry Propagation

Approach
- Traverse the array from right to left.
- If the current digit is less than 9:
    - Increment it.
    - Return the array immediately.
- Otherwise:
    - Set the digit to 0.
    - Continue carrying to the next digit.
- If all digits become 0, insert 1 at the beginning.

Time Complexity
O(n)

Space Complexity
O(1)
(ignoring output array modification)

Learning
- Simulates elementary-school addition.
- Carry propagates only when digit is 9.
- Early return avoids unnecessary traversal.
- Special case: all digits are 9.

Revision Notes
1. Start from the last digit.
2. If digit < 9 → increment and return.
3. If digit == 9 → make it 0 and continue.
4. If all digits are 9 → add leading 1.

Examples

[1,2,3] → [1,2,4]

[4,3,2,1] → [4,3,2,2]

[9,9,9] → [1,0,0,0]

==================================================
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
