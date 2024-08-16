#include<bits/stdc++.h>

 

int func(vector<int>& arr,int div){

    int total=0;

    for(int i=0;i<arr.size();i++){

        total+=ceil(double(arr[i])/double(div));

    }

    return total;

}

 

int smallestDivisor(vector<int>& arr, int limit)

{

    int n=arr.size();

    int low=1;

    int high=*max_element(arr.begin(),arr.end());

    while(low<=high){

        int mid=(low+high)/2;

        int req=func(arr,mid);

        if(req<=limit){

            high=mid-1;

        }

        else{

            low=mid+1;

        }

    }

    return low;

 

}

