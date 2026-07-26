/*
==================================================
Problem Number : 1672
Problem Name   : Richest Customer Wealth
Difficulty     : Easy

Topics
- Array
- Matrix

Pattern
- Matrix Traversal
- Simulation

Approach
- Traverse each customer's bank accounts.
- Calculate the total wealth by summing all account balances.
- Compare the current customer's wealth with the maximum wealth found so far.
- Update the maximum if the current wealth is greater.
- Return the maximum wealth after processing all customers.

Time Complexity
O(m × n)

Space Complexity
O(1)

Learning
- A 2D vector (matrix) can be traversed using nested loops.
- Range-based for loops make matrix traversal cleaner and easier to read.
- Maintain a running maximum while iterating to avoid storing intermediate results.
- Matrix traversal is a common pattern in array problems.

==================================================
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;

        for (auto& customer : accounts) {
            int currentwealth = 0;

            for (int bank : customer) {
                currentwealth += bank;
            }

            maxwealth = max(maxwealth, currentwealth);
        }

        return maxwealth;
    }
};
