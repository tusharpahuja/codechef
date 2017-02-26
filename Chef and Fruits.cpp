#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int T,n,m,k;
cin>>T;
while(T--){
    cin>>n>>m>>k;
    if(n<m){
        if(k>=abs(m-n)){
            cout<<0<<endl;
        }
        else{
            n = n+k;
            cout<<abs(m-n)<<endl;
        }
    }
    else if(m<n){
        if(k>=abs(m-n)){
            k = k-abs(m-n);
            cout<<0<<endl;
        }
        else{
            m = m+k;
            cout<<abs(m-n)<<endl;
        }
    }
    else if(m==n){
        cout<<0<<endl;
    }
}
return 0;
}






