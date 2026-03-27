// Given an array arr and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

// Return true if such a triplet exists, otherwise, return false.


// Example 1:
// Input: arr = [1,4,45,6,10,8], target = 13
// Output: true
// Explanation:
// The triplet {1, 4, 8} sums up to 13.

bool hasTripletSum(vector<int> &arr, int target) {
    // Code Here
    sort(arr.begin(),arr.end());
    int n = arr.size();

    for(int i=0; i<n-2; i++){
        int start=i+1, end=n-1, newTarget = target-arr[i];


        while(start<end){
            if(arr[start]+arr[end]==newTarget){
                return true;
            }else if(arr[start]+arr[end]<newTarget){
                start++;
            }else{
                end--;
            }
        }
    }
    return false;
}
