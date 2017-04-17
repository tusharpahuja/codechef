#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int n,i,j,T,k1=0,k2=0,l1,l2,c=0,temp = 0;
cin>>T;
char M[26000],W[26000];
while(T--){
    cin>>M>>W;
    l1 = strlen(M);
    l2 = strlen(W);
    k1=0;
    k2=0;
    if(l1<l2){
        temp = 0;
        while(k1<l1){
            while(k2<l2){
                if(M[k1]==W[k2]){
                    k1++;
                }
                k2++;
            }
            if(k1!=(l1)){
                temp = 1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(k1==(l1)){
            cout<<"YES"<<endl;
        }
    }
    else{
        temp = 0;
        while(k2<l2){
            while(k1<l1){
                if(M[k1]==W[k2]){
                    k2++;
                }
                k1++;
            }
            if(k2!=(l2)){
                temp = 1;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(k2==(l2)){
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}

