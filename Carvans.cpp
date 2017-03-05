#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long T,i,N,X,a,b,cou=0;
cin>>T;
while(T--){
    cin>>N;
    cou=1;
    long long a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=1;i<N;i++){
        if(a[i]<a[i-1]){
            cou++;
        }
        else{
            a[i] = a[i-1];
        }
    }
    cout<<cou<<endl;
}
return 0;
}






