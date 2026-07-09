/*
==================================================
Problem Number : 0013
Problem Name   : Roman to Integer
Difficulty     : Easy

Topics
- Hash Table
- String
- Math

Pattern
- Character Mapping
- Greedy Traversal

Approach
- Store the value of each Roman numeral in a hash map.
- Traverse the string from left to right.
- If the current numeral is smaller than the next numeral,
  subtract its value from the answer.
- Otherwise, add its value.
- Return the final computed integer.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Use a hash map for constant-time character lookup.
- Roman numerals use subtractive notation (IV, IX, XL, XC, CD, CM).
- Comparing the current and next characters avoids handling
  each special case separately.
- A single traversal is sufficient to solve the problem.

==================================================
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> value = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int result = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && value[s[i]] < value[s[i + 1]]) {
                result -= value[s[i]];
            } else {
                result += value[s[i]];
            }
        }

        return result;
    }
};
