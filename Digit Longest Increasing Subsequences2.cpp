#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long t,i,n;
cin>>t;
while(t--){
    cin>>n;
    long long a[n],val[10];
    memset(val,0,sizeof(val));
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
return 0;
}
