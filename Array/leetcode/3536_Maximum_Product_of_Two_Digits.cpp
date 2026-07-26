/*
==================================================
Problem Number : 3536
Problem Name   : Maximum Product of Two Digits
Difficulty     : Easy

Topics
- Math
- Simulation

Pattern
- Digit Extraction
- Greedy

Approach
- Initialize two variables to store the largest and second-largest digits.
- Extract each digit using:
    digit = n % 10
- Remove the last digit using:
    n /= 10
- Update:
  - `max1` if the current digit is the largest seen so far.
  - Otherwise, update `max2` if the digit is larger than the current second-largest.
- Return the product of `max1` and `max2`.

Time Complexity
O(log₁₀(n))

Space Complexity
O(1)

Learning
- Digits of a number can be processed using modulo (%) and division (/).
- Maintaining the two largest values eliminates the need for sorting.
- Greedy updates help find the answer in a single traversal.
- The number of iterations equals the number of digits.

==================================================
*/

class Solution {
public:
    int maxProduct(int n) {
        int max1 = 0;
        int max2 = 0;

        while (n != 0) {
            int digit = n % 10;
            n /= 10;

            if (digit >= max1) {
                max2 = max1;
                max1 = digit;
            }
            else if (digit > max2) {
                max2 = digit;
            }
        }

        return max1 * max2;
    }
};
