#include<iostream>
#include<cstdio>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){

long long N,K,i,j,sum=0,yo;
scanf("%lld %lld",&N,&K);

long long a[N];
for(i=0;i<N;i++){
    scanf("%lld",&a[i]);
}

sort(a,a+N);
for(i=0;i<N;i++){
    if(a[i]>=K){
        break;
    }
    yo = upper_bound(a+i+1,a+N,K-a[i]-1)-a;
    sum += yo-i-1;
}

printf("%lld",sum);
return 0;
}





