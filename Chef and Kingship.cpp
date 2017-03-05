#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long t,i,n,s,m;
cin>>t;
while(t--){
    cin>>n;
    s=0;
    m = 1e9;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<m){
            m = a[i];
        }
        s += a[i];
    }
    s -= m;
    cout<<s*m<<endl;
}
return 0;
}





