#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<set>
using namespace std;

int main(){
long long t,n,i;
cin>>t;
while(t--){
    cin>>n;
    long long a[n];
    //memset(t,0,sizeof(t));
    set<long long> s;
    for(i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    cout<<s.size()<<endl;
}
return 0;
}
