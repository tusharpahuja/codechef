#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
long long T,G,I,N,n,Q,i,h,t,q;
cin>>T;
while(T--){
    cin>>n;
    while(n--){
        cin>>I>>N>>Q;
        if(N%2==0){
            h = N/2;
            t = N/2;
        }
        else{
            if(I==1){
                h = N/2;
                t = h+1;
            }
            else{
                t = N/2;
                h = t+1;
            }
        }
        if(Q==1){
            cout<<h<<endl;
        }
        else{
            cout<<t<<endl;
        }
    }
}
return 0;
}






