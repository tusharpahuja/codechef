#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
long long n,k,i,a,c=0;
cin>>n>>k;
for(i=0;i<n;i++){
    cin>>a;
    if(a%k==0){
        c++;
    }
}
cout<<c;
return 0;
}
