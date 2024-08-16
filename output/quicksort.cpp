#include<iostream> 
using namespace std;

int partition(int arr[],int start,int end){
    int pivot=arr[start];

    int cnt=0;
    for(int i=start+1;i<=end;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //placing the pivot at right position
    int pivotIndex=start+cnt;
    swap(arr[pivotIndex],arr[start]);

    //sorting left and right portions 
    int i=start,j=end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j> pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}
void quicksort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int p=partition(arr,start,end);
    quicksort(arr,start,p-1);
    quicksort(arr,p+1,end);


}

int main(){
    int arr[6]={2,-5,1,3,9,7};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}