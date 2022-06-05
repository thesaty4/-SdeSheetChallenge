int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res=1;
    while(n>0){
        if(n&1)//oddcase
            res=(1LL*res*(x)%m)%m; //Long DataType TypeCast
        x=(1LL*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    
    return res;
}