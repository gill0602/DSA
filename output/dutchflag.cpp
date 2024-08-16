vector<int> Sort0s1s2s(vector<int> &arr){
	// Write your code here.
	int n=arr.size();
	int start=0,mid=0;
	int end=n-1;
	while(mid<=end){
		if(arr[mid]==0){
			swap(arr[mid],arr[start]);
			mid++,start++;
		}
		else if(arr[mid]==1){
			mid++;
		}
		else{
			swap(arr[mid],arr[end]);
			end--;
		}
	}
	return arr;
}