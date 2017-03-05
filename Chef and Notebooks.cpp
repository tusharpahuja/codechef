#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long t,x,y,i,k,n,le,er=0;
cin>>t;
while(t--){
    cin>>x>>y>>k>>n;
    le = x-y;
    er=0;
    long long p[n],c[n];
    for(i=0;i<n;i++){
        cin>>p[i]>>c[i];
        if(c[i]<=k && p[i]>=le){
            er=1;
        }
    }
    if(er==1){
        cout<<"LuckyChef"<<endl;
    }
    else{
        cout<<"UnluckyChef"<<endl;
    }



}
return 0;
}






