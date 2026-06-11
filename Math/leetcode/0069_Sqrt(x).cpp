/*
==================================================
Problem Number : 0069
Problem Name   : Sqrt(x)
Difficulty     : Easy

Topics
- Math
- Binary Search

Pattern
- Binary Search on Answer

Approach
- Search for the largest number whose square
  is less than or equal to x.
- Use Binary Search between 1 and x.
- If mid * mid <= x:
    - Store mid as a possible answer.
    - Search on the right side.
- Otherwise:
    - Search on the left side.
- Use x / mid instead of mid * mid to avoid overflow.

Time Complexity
O(log n)

Space Complexity
O(1)

Learning
- Binary Search can be applied to answers, not just arrays.
- Avoid overflow using:
    mid <= x / mid
- Store the last valid answer.

Revision Notes
1. Search Space = [1, x]
2. Find largest mid such that mid² ≤ x
3. Use x / mid instead of mid * mid
4. Binary Search on Answer pattern

Examples

x = 4
Output = 2

x = 8
Output = 2

==================================================
*/

class Solution {
public:
    int mySqrt(int x) {

        if(x == 0){
            return 0;
        }
        int low = 1, high = x;
        int ans = 0;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(mid <= (x / mid)){
                ans = mid;
                low = mid + 1;
            }

            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};
