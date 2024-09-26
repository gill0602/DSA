class Solution {
private:
    int atleastKodds(vector<int> arr,int k){
	int n=arr.size();
	int start=0,end=0,ans=0,cnt=0;
	for(end;end<n;end++){
		if(arr[end]%2!=0) cnt++;

		while(cnt>k){
			if(arr[start]%2!=0) cnt--;
			start++;
		}
		ans=ans+(end-start+1);
	}
	return ans;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atleastKodds(nums,k)-atleastKodds(nums,k-1);
    }
};