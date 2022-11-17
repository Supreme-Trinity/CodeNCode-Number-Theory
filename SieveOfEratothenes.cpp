int isprime[1000001];
void sieve(){ //Preprocessing is done here
    int maxN=1000000;
    for(int i=0;i<maxN;i++){
        arr[i]=1;
        
    }
    arr[0]=arr[1]=0;
    for(int i=2;*i<=maxN;i++){
        if(isprime[i]){
            for(int j=i*i;j<=maxN;j+=i){
                isprime[j]=0;
            }
        }
    }
    
}
