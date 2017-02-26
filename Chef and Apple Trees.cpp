#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long T,N,i,maxi,sum=0,d[100004];
cin>>T;
while(T--){
    cin>>N;
    long long a[N];
    maxi = 0;
    sum = 0;
    memset(d,0,sizeof(d));
    for(i=0;i<N;i++){
        cin>>a[i];
        d[a[i]]++;
        if(a[i]>maxi){
            maxi = a[i];
        }
    }
    for(i=1;i<=maxi;i++){
        if(d[i]>0){
            sum++;
        }
    }
    cout<<sum<<endl;
}
return 0;
}






