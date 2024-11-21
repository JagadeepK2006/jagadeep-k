int hammingWeight(int n) {
    int k=n;
    int i=0;
    while(k!=0){
        if(k&1){
            i++;
        }
        k>>=1;
    }
    return i;
}
