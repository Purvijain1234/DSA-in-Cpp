/*
==================================================
Problem Number : 0509
Problem Name   : Fibonacci Number
Difficulty     : Easy

Topics
- Math
- Dynamic Programming
- Recursion

Pattern
- Recursion
- Divide and Conquer

Approach
- Handle the base cases:
  - If n is 0 or 1, return n.
- Otherwise, recursively compute:
  - fib(n - 1)
  - fib(n - 2)
- Return the sum of both recursive calls.

Time Complexity
O(2^n)

Space Complexity
O(n)

Learning
- Fibonacci is a classic recursion problem.
- Recursive solutions are simple but recompute the same subproblems many times.
- Dynamic Programming or Memoization reduces the complexity to O(n).
- Space complexity is O(n) due to the recursion call stack.

==================================================
*/

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }

        return fib(n - 1) + fib(n - 2);
    }
};
