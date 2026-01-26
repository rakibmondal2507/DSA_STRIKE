// Given a 2D array matrix of size n × m, return the index of the row with the maximum sum. If multiple rows have the same maximum sum, return the smallest index. Return -1 if the matrix is empty or has no columns.

// Example 1:
// Input: matrix = [[1,1,1,1],[2,5,7,9],[3,3,1,1],[2,0,1,1]]
// Output: 1
// Explanation:
// Row 0: 4, Row 1: 23, Row 2: 8, Row 3: 4.
// Max is 23 at index 1.


int rowWithMaxSum(vector<vector<int>>& mat) {
    // Your code here

	if(mat.size()==0 || mat[0].size()==0){
		return -1;
	}

	int sum= INT_MIN, ans=0;
	for(int i=0; i<mat.size(); i++){
		int sumOfRow = 0;
		for(int j=0;j<mat[0].size(); j++){
			sumOfRow += mat[i][j];
		}
		if(sumOfRow > sum){
				sum = sumOfRow;
				ans = i;
			} 
	}
	return ans;
}
