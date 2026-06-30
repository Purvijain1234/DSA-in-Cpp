/*
==================================================
Problem Number : 0001
Problem Name   : Two Sum
Difficulty     : Easy

Topics
- Array
- Hash Table

Pattern
- Hash Map
- Complement Search

Approach
- Traverse the array once.
- For each element, calculate the complement:
      complement = target - nums[i]
- Check if the complement already exists in the hash map.
- If found, return the stored index and current index.
- Otherwise, store the current element and its index.

Time Complexity
O(n)

Space Complexity
O(n)

Learning
- Hash Map provides O(1) average lookup.
- Store visited elements while traversing.
- Think in terms of finding the complement instead of checking every pair.
- A classic example of the Hash Map pattern.

Revision Notes
1. Complement = target - nums[i]
2. Check Hash Map first.
3. If found → return indices.
4. Else → store current value and index.

Examples

nums = [2,7,11,15], target = 9
Output = [0,1]

nums = [3,2,4], target = 6
Output = [1,2]

nums = [3,3], target = 6
Output = [0,1]

==================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // hash map
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int rem = target - nums[i];
            if(mp.find(rem) !=  mp.end()){
                return {mp[rem], i};
            }
            mp[nums[i]] = i;
        }
        return {};

        // brute force
        // vector<int> result;
        // for(int i = 0; i<nums.size(); i++){
        //     for(int j = i+1; j<nums.size(); j++){
        //         if(nums[i] + nums[j] == target){
        //             result.push_back(i);
        //             result.push_back(j);
        //         }
        //     }
        // }
        // return result;
    }
};
