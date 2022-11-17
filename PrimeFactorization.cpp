#include <bits/stdc++.h>
using namespace std;

void primefac(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int ct=0;
            while(n%i==0){
                ct++;
                n/=i;
                
            }
            cout<<i<<"^"<<ct<<endl;
        }
    }
}

void primefacOpt(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int ct=0;
            while(n%i==0){
                ct++;
                n/=i;
                
            }
            cout<<i<<"^"<<ct<<endl;
        }
    }
}
int main(){
    primefac(8);
    primefacOpt(8);
    return 0;
}
