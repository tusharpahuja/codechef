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
long long t,i,l1,l2,c;
cin>>t;
string a,b;
while(t--){
    cin>>a>>b;
    c=0;
    l1 = strlen(a.c_str());
    l2 = strlen(b.c_str());
    long long on[130],tw[130];
    memset(on,0,sizeof(on));
    memset(tw,0,sizeof(tw));
    for(i=0;i<l1;i++){
        on[int(a[i])]++;
    }
    for(i=0;i<l2;i++){
        tw[int(b[i])]++;
    }
    for(i=40;i<130;i++){
        c += min(on[i],tw[i]);
    }
    cout<<c<<endl;
}
return 0;
}







