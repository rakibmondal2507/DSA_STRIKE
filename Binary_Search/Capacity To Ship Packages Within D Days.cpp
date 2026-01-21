bool isLoadPossible(int maxWeight, vector<int> &weights, int days){

	int count=1, loadCapacity=weights[0];
	for(int i=1; i<weights.size();i++){
		loadCapacity +=weights[i];
		if(loadCapacity>maxWeight){
			count++;
			loadCapacity = weights[i];

		}
	}
	return count<=days;
}

int shipWithinDays(vector<int> &weights, int days) {
    // Your code here

	int start=0, end=0, n=weights.size(),ans, mid;

	for(int i=0; i<n; i++){
		start = max(weights[i],start);
		end = end+weights[i];
	}

	while(start<=end){
		mid=start+(end-start)/2;

		if(isLoadPossible(mid, weights, days)){
			ans=mid;
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return ans;
}
