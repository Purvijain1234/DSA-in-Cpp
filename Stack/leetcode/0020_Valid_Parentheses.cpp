/*
==================================================
Problem Number : 0020
Problem Name   : Valid Parentheses
Difficulty     : Easy

Topics
- Stack
- String

Pattern
- Stack
- Bracket Matching

Approach
- Create an empty stack.
- Traverse each character in the string.
- If the character is an opening bracket:
  - Push it onto the stack.
- Otherwise:
  - If the stack is empty, return false.
  - Check whether the current closing bracket matches the top of the stack.
  - If it does not match, return false.
  - Otherwise, pop the opening bracket.
- After processing all characters:
  - Return true only if the stack is empty.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- A stack is ideal for matching nested brackets.
- Always check whether the stack is empty before accessing the top element.
- Every opening bracket must have a matching closing bracket.
- The stack should be empty after processing a valid expression.

==================================================
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {

            // Opening bracket
            if (ch == '(' || ch == '[' || ch == '{') {
                st.push(ch);
            }
            else {

                if (st.empty()) {
                    return false;
                }

                // Check matching brackets
                if ((ch == ')' && st.top() != '(') ||
                    (ch == '}' && st.top() != '{') ||
                    (ch == ']' && st.top() != '[')) {
                    return false;
                }

                st.pop();
            }
        }

        return st.empty();
    }
};
