bool isPowerOfTwo(int n) {
    while (n>0){
        if (n>1 && n%2!=0){
            return false;
        }
        if(n==1){
            return true;
        }
        n=n/2;
    }
    return false;
}
