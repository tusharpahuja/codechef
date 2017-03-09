#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long t,n,b,m,i,sum=0,b1;
cin>>t;
while(t--){
    sum=0;
    cin>>n>>b>>m;
    while(n>0){
        if(n==1){
            sum += m;
            break;
        }
        if(n%2==0){
            b1 = n/2;
            sum += b1*m;
            sum += b;
            m *=2;
            n = b1;
        }
        else{
            b1 = n/2 + 1;
            sum += b1*m;
            sum += b;
            m *=2;
            n = n-b1;
        }
    }
    cout<<sum<<endl;
}

return 0;
}




