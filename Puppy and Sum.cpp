#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int sum(int N){
    int i,s=0;
    for(i=1;i<=N;i++){
        s += i;
    }
    return s;
}

int main(){
int T,D,N,i,s;
cin>>T;
while(T--){
    cin>>D>>N;
    s = N;
    for(i=0;i<D;i++){
        s = sum(s);
    }
    cout<<s<<endl;
}
return 0;
}






