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
- Store Roman numeral values in a hashmap.
- Traverse the string from left to right.
- If current symbol is smaller than the next symbol,
  subtract its value.
- Otherwise, add its value.
- Return the final result.

Time Complexity
O(n)

Space Complexity
O(1)

Learning
- Use HashMap for quick symbol lookup.
- Roman numerals use subtraction rules:
    IV = 4
    IX = 9
    XL = 40
    XC = 90
    CD = 400
    CM = 900
- Compare current and next character to decide
  whether to add or subtract.

Revision Notes
1. If current < next → subtract.
2. Else → add.
3. HashMap stores Roman symbol values.
4. Single traversal solution.

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
        for(int i=0; i<s.length(); i++){
            if(i+1 < s.length() && value[s[i]] < value[s[i+1]]){
                result -= value[s[i]];
            }
            else{
                result += value[s[i]];
            }
        }
        return result;
    }
};
