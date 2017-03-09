#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long T,N,i,er=0,c=0,j,yo;
cin>>T;
yo=1;
while(T--){
    cin>>N;
    long long m[N],a[N],b[N];
    for(i=0;i<N;i++){
        cin>>m[i];
    }
    for(i=0;i<N;i++){
        b[i] = m[i]/(long long)(pow(2,16));
        a[i] = m[i]%(long long)(pow(2,16));
    }
    cout<<"Case "<<yo<<":"<<endl;
    for(i=0;i<N;i++){
        if(i==(N-1)){
            cout<<a[i];
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    for(i=0;i<N;i++){
        if(i==(N-1)){
            cout<<b[i];
        }
        else{
            cout<<b[i]<<" ";
        }
    }
    cout<<endl;
    yo++;
}
return 0;
}






