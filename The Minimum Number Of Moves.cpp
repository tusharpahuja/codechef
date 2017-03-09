#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long T,i,c=0,m,x,n;
cin>>T;
while(T--){
cin>>n;
c=0;
long long a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
for(i=1;i<n;i++){
     c += abs(a[0]-a[i]);
}
cout<<c<<endl;
}
return 0;
}


