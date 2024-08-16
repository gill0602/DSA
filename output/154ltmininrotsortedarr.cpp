//repeated elements are there
int findMin(vector<int>& arr) {
        int low=0;
        int ans=INT_MAX;
        int high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[high]<arr[mid]){
                low=mid+1;
            }
            else if(arr[high]>arr[mid]){
                high=mid;
            }
            else{
                high--;
            }

        }

    return arr[low];
        
    }