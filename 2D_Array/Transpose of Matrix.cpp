vector<vector<int>> transpose(vector<vector<int>>& mat) {
	int rows=mat.size(), cols = mat[0].size();

	vector<vector<int>>ans(rows, vector<int>(cols));

	for(int i=0; i<rows; i++){
		for(int j=0; j<cols; j++){
			ans[j][i]=mat[i][j];
		}
	}


	return ans;
}
