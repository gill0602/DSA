#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int start=0,end=n-1;

    while(start<end){
        int mid=start+end/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }  
        else{
            end=mid;
        }
    }
    return s;//can return either s or e because values of both are same
}
int bsearch(int arr[],int s,int e,int k){
    int start=s,end=e;
    while(start<=end){
        int mid=start+end/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid>k]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

int main{
    
}