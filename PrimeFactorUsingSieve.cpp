#include <bits/stdc++.h>
using namespace std;

int ar[1000001];
void PrimeFactorUsingSieve(){
    int max=1000000;
    for(int i=0;i<max;i++){
        ar[i]=-1;
    }
    for(int i=2;i<max;i++){
        if(ar[i]==-1){
            for(int j=i;j<max;j+=i){
                if(ar[j]==-1){
                ar[j]=i;
                }
            }
        }
    }
}
int main(){
    PrimeFactorUsingSieve();//Pre processed
    cout<<ar[8]<<endl;
    return 0;
}
