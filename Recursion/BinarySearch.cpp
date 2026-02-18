int BinarySearch(vector<int>& nums, int start, int end, int target){
//base condition
	if(start>end){
		return -1;
	}

	int mid= start+(end-start)/2;


	if(nums[mid]==target){
		return mid;
	}else if(nums[mid]>target){
		return BinarySearch(nums, start, end-1, target);
	}else{
		return BinarySearch(nums, start+1, end, target);
	}

}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        // Write your code here

	int start=0, end=nums.size()-1;

	return BinarySearch(nums, start, end, target);

	
    }
};
