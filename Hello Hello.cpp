#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long t,i,u,n,m,key;
long double d,r,c,val1,val2,mini;
cin>>t;
while(t--){
    cin>>d>>u>>n;
    mini = 1e9;
    vector< pair<pair<long long,long double>,long long> > v;
    for(i=0;i<n;i++){
        cin>>m>>r>>c;
        val1 = m*d*u;
        val2 = ((m*u*r) + c)/m;
        if(min(val1,val2)<mini){
            mini = min(val1,val2);
            if(mini==val2){
                key = i+1;
            }
            if(mini==val1){
                key = 0;
            }
        }
        v.push_back(make_pair(make_pair(m,r),c));
    }
    cout<<key<<endl;
}
return 0;
}







