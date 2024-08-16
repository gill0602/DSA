#include <bits/stdc++.h>
void selectionSort(vector<int> &arr, int n) {
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
    }
}

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int binarySearch(int arr[],int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid= start +(end-start)/2;
        if( arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}

void insertionSort(int n, vector<int> &arr){
    int i=1;
    int j;
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void mergeSort(int arr[]){
    

}
//linear search in binary tree
ListNode* searchbtree(Node* root,int val){
    if(root->data==val){
        return root;
    }

}

//binary search
bool search(int arr[],int val){
    int start=0,end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==val){
            return 1;
        }
        else if(arr[mid]>val){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return 0;
}