#include<iostream>
#include<stdlib.h>
#include<algorithm>

#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
using namespace std;

int main(){

boostIO;
long long N,i,j;
cin>>N;
long long a[N],maxi=0,sum=0,k=0;
for(i=0;i<N;i++){
    cin>>a[i];
}

sort(a,a+N);

for(i=0;i<N;i++){
    if((a[i]*(N-k))>maxi){
        maxi = (a[i]*(N-k));
    }
    k++;
}
cout<<maxi;
return 0;
}
