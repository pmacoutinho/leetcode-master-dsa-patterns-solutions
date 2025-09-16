/*
DISCLAIMER: Even though this first try solution is correct, it might exceed the
time limit on the leetcode submission depending on the size of k. For a better
solution consult my second try at the problem.

189. Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.


Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]


Constraints:

    1 <= nums.length <= 105
    -231 <= nums[i] <= 231 - 1
    0 <= k <= 105
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int temp; 
        for (int j=0; j<k; j++) { 
        int prev = nums[0];
            for (int i=1; i<nums.size()-1; i++) {
                temp = nums[i]; 
                nums[i] = prev;
                prev = temp; 
            }

            nums[0] = nums[nums.size()-1]; 
            nums[nums.size()-1] = prev;
        }
    }
};
