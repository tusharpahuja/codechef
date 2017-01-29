#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main() {
	long long t,n,i,j,l,k,zc=0,oc=0,si=0;
	cin>>t;
	while(t--){
        cin>>n>>k;
        si=0;
        long long a[n],d[102];
        memset(d,0,sizeof(d));
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==(i+1)){
                d[a[i]]=-1;
            }
            if(d[a[i]]!=-1){
                d[a[i]]++;
            }
        }
        for(i=1;i<=101;i++){
            if(d[i]>=k){
                si++;
            }
        }
        cout<<si<<endl;
	}
	return 0;
}
