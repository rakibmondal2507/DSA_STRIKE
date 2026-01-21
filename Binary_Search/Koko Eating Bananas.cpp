bool isEatingPossible(int maxSpeed,vector<int>& piles, int h ){
	int totalTimes = 0;

	for(int i=0; i<piles.size(); i++){
		totalTimes += piles[i]/maxSpeed;
		if(piles[i]%maxSpeed){
			totalTimes++;
		}

	}
	return totalTimes <=h;
}

int minEatingSpeed(vector<int>& piles, int h) {
    // Your code here

	  int start=1, end=0,ans;

	  for(int i=0; i<piles.size();i++){
		end = end+piles[i];
	  }

	  while(start<=end){
		int mid = start + (end-start)/2;
		if(isEatingPossible(mid, piles, h)){
			ans = mid;
			end=mid-1;
		}else{
			start = mid+1;
		}
	  }
	  return ans;
}
