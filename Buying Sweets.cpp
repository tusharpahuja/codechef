#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
long long T,N,X,i,sum=0,rem,err=0;
cin>>T;
while(T--){
    cin>>N>>X;
    sum=0;
    err=0;
    long long a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
        sum += a[i];
    }
    rem = sum%X;
    for(i=0;i<N;i++){
        if(a[i]<=rem){
            err=1;
        }
    }
    if(err==1){
        cout<<-1<<endl;
    }
    else{
        cout<<(sum/X)<<endl;
    }
}
return 0;
}

