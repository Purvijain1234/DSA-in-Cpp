/*
==================================================
Problem Number : 0088
Problem Name   : Merge Sorted Array
Difficulty     : Easy

Topics
- Array
- Two Pointers
- Sorting

Pattern
- Merge Two Sorted Arrays
- Two Pointers

Approach
- Create a temporary array to store the merged result.
- Initialize three pointers:
  - `i` for nums1
  - `j` for nums2
  - `k` for the merged array
- Compare the current elements of both arrays.
- Insert the smaller element into the merged array and move its pointer.
- Copy any remaining elements from either array.
- Copy the merged array back into nums1.

Time Complexity
O(m + n)

Space Complexity
O(m + n)

Learning
- The merge process is the same technique used in Merge Sort.
- Two pointers efficiently merge two sorted arrays.
- A temporary array simplifies implementation.
- An optimized solution exists with O(1) extra space by merging from the end.

==================================================
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int merge[m + n];
        int i = 0, j = 0, k = 0;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                merge[k++] = nums1[i++];
            }
            else {
                merge[k++] = nums2[j++];
            }
        }

        while (i < m) {
            merge[k++] = nums1[i++];
        }

        while (j < n) {
            merge[k++] = nums2[j++];
        }

        for (int i = 0; i < m + n; i++) {
            nums1[i] = merge[i];
        }
    }
};
