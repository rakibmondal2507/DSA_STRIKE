// You are given a one-dimensional unsorted array arr containing n integers and an integer diff . Find if there exists a pair of elements in the array whose absolute difference is exactly diff .

// Return 1 if any such pair exists, else return 0.

// Example 1:
// Input: arr = [5, 10, 3, 2, 50, 80], diff = 78
// Output: 1
// Explanation:
// Pair (2, 80) have an absolute difference of 78.


int pairWithGivenDifference(vector<int>& arr, int diff) {
    // Your code here
    sort(arr.begin(), arr.end());

        int n= arr.size();
        int start=0, end=0;

        while(start<=end&&end<n){
            if(arr[end]-arr[start]==diff){
                return 1;
            }else if(arr[end]-arr[start]<diff){
                end++;
            }else{
                start++;
            }
        }
    return 0;
    
}

