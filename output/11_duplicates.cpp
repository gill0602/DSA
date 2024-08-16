int findDuplicate(vector<int> &arr) 
{
    int i ;
    int n=arr.size();
    int ans=0;
    for(i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(i=1;i<n;i++){
        ans=ans^i;
    }
    return ans;
	
}
