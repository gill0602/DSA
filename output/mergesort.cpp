void merge(vector<int> & arr,int & start,int & mid,int & end){
    int s1=mid-start+1;
    int s2=end-mid;

    int *a=new int[s1];
    int *b=new int[s2];
    for(int i=0;i<s1;i++){
        a[i]=arr[start+i];
    }
    for(int i=0;i<s2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<s1 && j<s2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<s1){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k]=b[j];
        j++;
        k++;
    }
    delete []a;
    delete []b;
}

void mgsort(vector<int>&arr,int start,int end){
    if(start<end){
        int mid=start +(end-start)/2;
        mgsort(arr,start,mid);
        mgsort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}
void mergeSort(vector < int > & arr, int& n) {
    mgsort(arr,0,n-1);
}