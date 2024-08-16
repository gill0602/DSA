int search(int* arr, int n, int key) {
    
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }

        if(arr[s]<=arr[mid]) //Left part sorted
        {
            if(arr[s]<=key && key<=arr[mid])
            {
                e = mid-1; //target is in left part only
            }
            else
            {
                s = mid+1; //target is not found in left part
            }
        }

        else  //Right part is sorted
        {
            if(arr[mid]<=key && key<=arr[e])
            {
                s = mid+1; //Target is in right part only
            }
            else
            {
                e = mid-1; //Target is not found in right part
            }
        }

        mid = s+(e-s)/2; //updating the mid element
    }

    return -1;
}