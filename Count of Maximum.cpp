#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
using namespace std;

int main(){
int t,n,i;
cin>>t;
while(t--){
    cin>>n;
    long long a[n],m1=0,k;
    map<long long,long long> m;
    for(i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for(i=0;i<n;i++){
        if(m[a[i]]>m1){
            m1 = m[a[i]];
            k = a[i];
        }
        else if(m[a[i]]==m1){
            if(k>a[i]){
                k = a[i];
            }
        }
    }
    cout<<k<<" "<<m1<<endl;
}
return 0;
}



