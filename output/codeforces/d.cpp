for(int i=1;i<p;i++){
    for(int j=1;j<p;j++){
        if(i^j==p){
            p=i;
            i=1;
            j=1;
        }
    }
}
