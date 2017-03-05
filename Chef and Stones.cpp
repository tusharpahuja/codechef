#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long t,i,n,k,m,num;
cin>>t;
while(t--){
    cin>>n>>k;
    m=0;
    long long a[n],b[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        num = k/a[i];
        if((num*b[i])>m){
            m = (num*b[i]);
        }
    }
    for(i=0;i<n;i++){
        num = k/a[i];
        if((num*b[i])>m){
            m = (num*b[i]);
        }
    }
    cout<<m<<endl;
}

return 0;
}




