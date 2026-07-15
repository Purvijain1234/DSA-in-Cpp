/*
==================================================
Problem Number : 3658
Problem Name   : GCD of Odd and Even Sums
Difficulty     : Easy

Topics
- Math
- Number Theory

Pattern
- Mathematical Observation

Approach
- The sum of the first n odd numbers is n².
- The sum of the first n even numbers is n(n + 1).
- Therefore:
    gcd(n², n(n + 1))
  = n × gcd(n, n + 1)
- Since consecutive numbers are always coprime:
    gcd(n, n + 1) = 1
- Hence, the answer is simply n.

Time Complexity
O(1)

Space Complexity
O(1)

Learning
- Know the formulas:
  - Sum of first n odd numbers = n².
  - Sum of first n even numbers = n(n + 1).
- Consecutive integers always have a GCD of 1.
- Simplifying the mathematics often eliminates the need for computation.

==================================================
*/

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;
    }
};
