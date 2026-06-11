/*
==================================================
Problem Number : 0007
Problem Name   : Reverse Integer
Difficulty     : Medium

Topics
- Math

Pattern
- Digit Extraction
- Overflow Handling

Approach
- Extract the last digit using modulo (%).
- Remove the last digit using division (/).
- Build the reversed number digit by digit.
- Before updating the result, check for overflow and underflow.

Time Complexity
O(log₁₀(n))

Space Complexity
O(1)

Learning
- Extract digits using x % 10.
- Remove digits using x / 10.
- Handle integer overflow safely.
- Common technique for number manipulation problems.

Revision Notes
1. Digit = x % 10
2. Remove digit = x / 10
3. Check overflow before rev = rev * 10 + digit
4. Return 0 if result exceeds 32-bit integer range

==================================================
*/
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x!=0){
            int digit = x % 10;
            x = x/10;

            // check for overflow
            if(rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)){
                return 0;
            }

            //check for underflow
            if(rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)){
                return 0;
            }

            rev = rev * 10 + digit;
        }
        return rev;
    }
};
