// You are given a 1-indexed array of integers nums sorted in non-decreasing order, and an integer target.

// Your task is to find two distinct indices index1 and index2 such that:

// nums[index1] + nums[index2] == target‎‎
// 1 ≤ index1 < index2 ≤ nums.length
// Return the result as an integer array [index1, index2].


// Example 1:
// Input: nums = [4, 9, 18, 27, 31], target = 22
// Output: [1, 3]

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //code here
        vector<int> ans;
        int n = nums.size();
        int start=0, end=n-1;

        while(start<end){
            if(nums[start]+nums[end]==target){
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }else if(nums[start]+nums[end]>target){
                end--;
            }else{
                start++;
            }
        }
        return ans;
    }
};
