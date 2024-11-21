uint32_t reverseBits(uint32_t n) {
int ans=0;
for(int i=31;i>=0;i--,n>>=1){
    if(n&1){
        ans+=pow(2,i);
    }
}
return ans; 
}
