#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){

long long N,i,j,sum=0,d[1001],m=0;
cin>>N;
memset(d,0,sizeof(d));
long long a[N];

for(i=0;i<N;i++){
    cin>>a[i];
    d[a[i]]++;
    if(a[i]>m){
        m = a[i];
    }
}

for(i=1;i<=m-1;i++){
    for(j=i+1;j<=m;j++){
        //if(a[i]!=a[j]){
            sum += d[i]*d[j]*abs(i-j);
    }
}

cout<<sum;
return 0;
}





