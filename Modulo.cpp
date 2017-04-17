#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long t,i,b,c=0;
t=10;
while(t--){
    int a[43];
    c=0;
    memset(a,0,sizeof(a));
    for(i=0;i<10;i++){
        cin>>b;
        a[b%42]++;
    }
    for(i=0;i<42;i++){
        if(a[i]>0){
            c++;
        }
    }
    cout<<c<<endl;
}
return 0;
}
