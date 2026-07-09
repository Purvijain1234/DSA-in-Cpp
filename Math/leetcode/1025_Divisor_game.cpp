/*
==================================================
Problem Number : 1025
Problem Name   : Divisor Game
Difficulty     : Easy

Topics
- Math
- Game Theory

Pattern
- Mathematical Observation

Approach
- Alice wins if the given number is even.
- If n is odd, every possible move makes it even for Bob,
  allowing Bob to eventually win.
- If n is even, Alice can always choose x = 1, making n odd
  for Bob and maintaining the winning strategy.
- Therefore, return true for even numbers and false for odd numbers.

Time Complexity
O(1)

Space Complexity
O(1)

Learning
- Many game theory problems can be solved using simple mathematical observations.
- Look for patterns instead of simulating every move.
- Recognize parity (odd/even) as a useful property in optimization problems.

==================================================
*/

class Solution {
public:
    bool divisorGame(int n) {
        if (n % 2 != 0) {
            return false;
        }
        return true;
    }
};
