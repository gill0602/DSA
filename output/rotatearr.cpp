vector<int> rotateArray(vector<int>&a, int x, string dir) {

    string l="LEFT";

    string r="RIGHT";

    int n=a.size();

    vector<int> temp(a.size());

    if(dir == l){

        for(int i=0;i<n;i++){

            temp[(i+n-x%n)%n]=a[i];

        }

        a=temp;

    }

    

    if(dir == r){

        for(int i=0;i<n;i++){

            temp[(i+x)%n]=a[i];

        }

        a=temp;

 

    }

    return a;

}