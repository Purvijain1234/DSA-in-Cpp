/*
==================================================
Problem Number : 0009
Problem Name   : Palindrome Number
Difficulty     : Easy

Topics
- Math

Pattern
- Number Reversal

Approach
- Store the original number.
- Reverse the digits of the number.
- Compare the reversed number with the original number.
- If both are equal, the number is a palindrome.

Time Complexity
O(log₁₀(n))

Space Complexity
O(1)

Learning
- Reverse a number using modulo and division.
- Compare transformed result with original value.
- Use long long to avoid overflow while reversing.

Revision Notes
1. Save original number before modification.
2. Reverse digits using % and /.
3. Negative numbers are never palindromes.
4. Compare original and reversed values.

==================================================
*/

class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int org = x;
        int digit;
        while(x>0){
            digit = x % 10;
            rev = rev * 10 + digit;
            x = x / 10;
        }

        if (org == rev){
            return true;
        }
        else{
            return false;
        }
    }
};
