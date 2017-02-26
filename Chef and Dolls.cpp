#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int T,N,i,j,err=0;
cin>>T;
while(T--){
    cin>>N;
    int a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=0;i<N;i++){
        err = 0;
        for(j=i+1;j<N;j++){
            if(a[i]==a[j]){
                a[i] = 0;
                a[j] = 0;
                break;
            }
        }
    }
    for(i=0;i<N;i++){
        if(a[i]!=0){
            cout<<a[i]<<endl;
            break;
        }
    }
}
return 0;
}
