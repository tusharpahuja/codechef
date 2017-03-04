#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long T,i,N,X,a,b;
cin>>T;
while(T--){
    cin>>N;
    for(i=1;i<=sqrt(N);i++){
        if(N%i==0){
            a = i;
        }
    }
    b = N/a;
    cout<<abs(a-b)<<endl;
}
return 0;
}






