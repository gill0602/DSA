int findMin(vector<int>& arr)

{

    int low=0;

    int ans=INT_MAX;

    int high=arr.size()-1;

    while(low<=high){

        int mid=(low+high)/2;

        

        // left half sorted

      if(arr[low]<=arr[mid]){

          ans=min(arr[low],ans);

          low=mid+1;

      }

      // right sorted

 

      else {

          ans=min(arr[mid],ans);

          high=mid-1;

      }

    }

    return ans;

}