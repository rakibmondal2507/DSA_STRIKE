// Given an array A of n integers and an integer X, determine whether there exists a combination of four elements in the array whose sum equals X.

// Return true if such a combination exists, otherwise return false.

// Example 1:
// Input: A = [1, 1, 1, 1, 1], X = 4
// Output: 1
// Explanation:
// There are four 1's , whose sum is 4.

bool find4Numbers(vector<int>& A, int X) {
   sort(A.begin(), A.end());
int n = A.size();
for(int i=0; i<n-3; i++){
    for(int j=1; j<n-2; j++){

        int start = j+1, end =n-1, newTarget = X-A[i]-A[j];

        while(start<end){
            if(A[start]+A[end]==newTarget){
                return true;
            }else if(A[start]+A[end]<newTarget){
                start++;
            }else{
                end--;
            }
        }
       
    }
}
 return false;

}
