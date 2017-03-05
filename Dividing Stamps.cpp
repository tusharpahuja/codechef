#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long N,i,sum=0;
cin>>N;
long long a[N];
for(i=0;i<N;i++){
    cin>>a[i];
    sum += a[i];
}
if(sum == (N*(N+1)/2)){
    cout<<"YES";
}
else{
    cout<<"NO";
}
return 0;
}






