#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long t,n,i,c,s;
cin>>t;
string a;
while(t--){
    cin>>a;
    s=0;
    c = strlen(a.c_str());
    int d[70];
    memset(d,0,sizeof(d));
    for(i=0;i<c;i++){
        d[int(a[i])-64]++;
    }
    for(i=1;i<=60;i++){
        if(d[i]>0){
            if(d[i]%2==0){
                s += d[i]/2;
            }
            else{
                s += d[i]/2 + 1;
            }
        }
    }
    cout<<s<<endl;

}
return 0;
}






