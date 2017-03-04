#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<list>
#include<map>
using namespace std;

int main(){
long long t,n,i,s=0,j,c=0,er=0;
cin>>t;
while(t--){
    cin>>n;
    long long d[100004];
    map<long long,long long> m;
    s=0;
    er=0;
    c=0;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        m[a[i]] = (i+1);
    }

    for(i=n;i>=1;i--){
        if((i-m[i])>2){
            cout<<"Not Allowed"<<endl;
            er=1;
            break;
        }
        if(i==m[i]){
            continue;
        }
        s += abs((i) - m[i]);
        for(j=m[i];j<i;j++){
            a[j-1] = a[j];
            m[a[j]] = j;
        }
        a[j-1] = i;
        m[i] = i;
    }
    if(er==0){
        cout<<(s)<<endl;
    }
}
return 0;
}



