/*
==================================================
Problem Number : 0412
Problem Name   : Fizz Buzz
Difficulty     : Easy

Topics
- Math
- String
- Simulation

Pattern
- Conditional Checking
- Simulation

Approach
- Iterate from 1 to n.
- For each number:
  - If divisible by both 3 and 5, add "FizzBuzz".
  - Else if divisible by 3, add "Fizz".
  - Else if divisible by 5, add "Buzz".
  - Otherwise, add the number as a string.
- Return the resulting string array.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- Check the most specific condition (divisible by both 3 and 5) before individual cases.
- `to_string()` converts integers into strings.
- Simulation problems often require following the problem statement exactly.
- Conditional ordering is important to avoid incorrect results.

==================================================
*/

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> array;

        for (int i = 1; i <= n; i++) {
            if (i % 3 != 0 && i % 5 != 0) {
                array.push_back(to_string(i));
            }
            else if (i % 3 == 0 && i % 5 == 0) {
                array.push_back("FizzBuzz");
            }
            else if (i % 3 == 0) {
                array.push_back("Fizz");
            }
            else if (i % 5 == 0) {
                array.push_back("Buzz");
            }
        }

        return array;
    }
};
