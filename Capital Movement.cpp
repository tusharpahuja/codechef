#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long t,i,j;
cin>>t;
while(t--){
    long long n,a1,a2,ma=0,s=0,k1,k2,z,er=0;
    cin>>n;
    long long a[n][2];
    memset(a,0,sizeof(a));
    map<long long,vector<long long> > m;
    vector<long long>::iterator it;
    vector< pair<long long,long long> > te;
    for(i=1;i<=n;i++){
        cin>>a[i][0];
        te.push_back(make_pair(a[i][0],i));
    }
    sort(te.begin(),te.end());
    for(i=0;i<n-1;i++){
        cin>>a1>>a2;
        m[a1].push_back(a2);
        m[a2].push_back(a1);
    }
    for(i=1;i<=n;i++){
        s=n;
        er=0;
        while(s>=1){
            it = find(m[i].begin(),m[i].end(),te[s-1].second);
            if(te[s-1].second==i){
                s--;
                continue;
            }
            else if(it==m[i].end()){
                cout<<te[s-1].second<<" ";
                er=1;
                break;
            }
            s--;
        }
        if(er==0){
            cout<<0<<" ";
        }
    }
    cout<<endl;
}

return 0;
}
