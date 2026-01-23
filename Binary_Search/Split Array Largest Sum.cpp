bool isLargestSum(int maxSum ,vector<int> &arr, int k){

	int subarrayCount = 1, currentSum = 0;
	for(int i=0; i<arr.size(); i++){
		if(arr[i] > maxSum){
			return false;
		} 
		else if(currentSum + arr[i]>maxSum){
			subarrayCount++;
            currentSum = arr[i]; 
		}else{
			currentSum += arr[i]; 
		}
	}
	return subarrayCount <= k;
}

int splitArray(vector<int> &arr, int k) {
    // Your code here

	int start=0, end = 0, ans;

	for(int i =0; i<arr.size(); i++){
		end += arr[i];
	}

	while(start<=end){
		int mid = start + (end-start)/2;

		if(isLargestSum(mid, arr, k)){
			ans = mid;
			end = mid -1;
		}else{
			start = mid +1;
		}
	}
	 return ans;

}
