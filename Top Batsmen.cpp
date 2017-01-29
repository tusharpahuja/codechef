#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

long long C(int n, int r)
{
    long long f[n + 1];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        f[i] = i * f[i - 1];
    return f[n] / f[r] / f[n - r];
}

int main(){
long long t,i,k;
cin>>t;
long long s[11],d[101][2],p=1,co=0,le,yo,w=0;
while(t--){
    p=1;
    co=0;
    w=0;
    memset(d,0,sizeof(d));
    for(i=0;i<11;i++){
        cin>>s[i];
        d[s[i]][0]++;
    }
    cin>>k;
    sort(s,s+11);
    while(co!=(k)){
        if(d[s[10-w]][1]==0){
            if(d[s[10-w]][0]>=(k-co)){
                break;
            }
            co += d[s[10-w]][0];
            d[s[10-w]][1] = 1;
        }
        w++;
    }
    le = k-co;
    p = d[s[10-w]][0];
    //cout<<p<<" "<<le<<endl;
    yo = C(p,le);
    cout<<yo<<endl;
}
return 0;
}
