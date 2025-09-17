/*
DISCLAIMER: Even though this first try solution is correct, it might exceed the
time limit on the leetcode submission depending on the size of the nums array. For a better
solution consult my second try at the problem.

238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

    2 <= nums.length <= 105
    -30 <= nums[i] <= 30
    The input is generated such that answer[i] is guaranteed to fit in a 32-bit integer.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());

        answer[0] = 1;
        for (int i = 1; i<nums.size(); i++)
            answer[i] = answer[i-1] * nums[i-1];

        int right
    }
};
