/*
==================================================
Problem Number : 0125
Problem Name   : Valid Palindrome
Difficulty     : Easy

Topics
- Two Pointers
- String

Pattern
- String Filtering
- Two Pointer Comparison

Approach
- Traverse the string and keep only alphanumeric characters.
- Convert all characters to lowercase.
- Use two pointers:
  - One starting from the beginning.
  - One starting from the end.
- Compare characters while moving both pointers inward.
- If any pair differs, return false.
- If all pairs match, return true.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- Use `isalnum()` to ignore non-alphanumeric characters.
- Use `tolower()` for case-insensitive comparison.
- Two pointers are an efficient technique for palindrome checking.
- String preprocessing simplifies comparison logic.

==================================================
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        // Keep only lowercase letters and digits
        for (char ch : s) {
            if (isalnum(ch)) {
                str += tolower(ch);
            }
        }

        int i = 0;
        int j = str.size() - 1;

        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
