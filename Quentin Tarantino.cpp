#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long T,N,i,er=0,c=0;
cin>>T;
while(T--){
    cin>>N;
    er=0;
    c=0;
    long long a[N],def[510];
    memset(def,0,sizeof(def));
    for(i=0;i<N;i++){
        cin>>a[i];
        if(a[i]==(i+1)){
            c++;
        }
        def[a[i]]++;
    }
    if(c==N){
        cout<<"no"<<endl;
    }
    else{
        for(i=1;i<=N;i++){
            if(def[i]!=1){
                cout<<"no"<<endl;
                er=1;
                break;
            }
        }
        if(er==0){
            cout<<"yes"<<endl;
        }
    }
}
return 0;
}






