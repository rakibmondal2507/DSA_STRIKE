//You are given two matrices mat1 and mat2. Your task is to add them and return the resultant matrix. If addition is not possible, then return a matrix containing a single element -1 .

// Example 1:
// Input: mat1 = [[1, 2], [3, 4]], mat2 = [[1, 2], [3, 4]]
// Output: [[2, 4], [6, 8]]
// Example 2:
// Input: mat1 = [[1, 1], [1, 1]], mat2 = [[3, 4], [5, 6]]
// Output: [[4, 5], [6, 7]]



vector<vector<int>> addTwoMatrix(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
    int rows=mat1.size(), cols=mat1[0].size();
	
	if(mat1.size()!=mat2.size() || mat1[0].size()!=mat2[0].size()){
		vector<vector<int>>ans(1, vector<int>(1));
		ans[0][0]=-1;
		return ans;
	}

	vector<vector<int>>sum(rows, vector<int>(cols));

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}

	return sum;
}
