#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long t,i,n,m,a,b;
cin>>t;
while(t--){
    cin>>n;
    long long d[n+1][2];
    memset(d,0,sizeof(d));
    cin>>m;
    vector<long long> v;
    long long te[m][2];
    for(i=0;i<m;i++){
        cin>>a>>b;
        te[i][0] = a;
        te[i][1] = b;
        d[a][0]=b;
        d[b][0]=a;
    }
    for(i=m-1;i>=0;i--){
        if((d[te[i][0]][1]==0)&&(d[te[i][1]][1]==0)){
            v.push_back(i);
            d[te[i][0]][1] = 1;
            d[te[i][1]][1] = 1;
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
return 0;
}




