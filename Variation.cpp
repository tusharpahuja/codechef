#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<stdlib.h>
int main(){
long long N,K,i,j,c=0,yo;
cin>>N>>K;
long long a[N];
for(i=0;i<N;i++){
    cin>>a[i];
}
sort(a,a+N);
for(i=0;i<N;i++){
    yo = upper_bound(a,a+N,a[i]+K-1) - a;
    c += N-yo;
}
cout<<c;
return 0;
}
