void reverse(vector<int>& arr, int index, int n){

	if(index >= n ){
		return;
	}

	swap(arr[index], arr[n]);

	reverse(arr, index+1, n-1);

}

void reverseArray(vector<int>& arr) {

	int index=0, n = arr.size()-1;

	reverse(arr, index, n);


}
