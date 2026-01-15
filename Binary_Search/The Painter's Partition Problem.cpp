bool isPaintingPossible(int maxTime, vector<int> &arr, int k){
	int painter = 1, paintingTime = arr[0];

	for(int i=1; i<arr.size(); i++){
		paintingTime += arr[i];
		if(paintingTime>maxTime){
			painter++;
			paintingTime = arr[i];
		}
	}
	return painter <= k;
}

int minTime(vector<int> &arr, int k) {
    // Your code here
	int start=0, end=0, ans, mid;

	for(int i=0; i<arr.size(); i++){
		start = max(start,arr[i]);
		end = end+arr[i];
	}

	while(start<=end){
		mid = start +(end-start)/2;

		if(isPaintingPossible(mid, arr, k)){
			ans = mid;
			end = mid-1;
		}else{
			start = mid+1;
		}
	}
	return ans;
}
