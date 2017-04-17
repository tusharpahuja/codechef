#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long n,m,i,j,e1=0,e2=0,l;
cin>>n>>m;
long long a[n+1][m+1];
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        cin>>a[i][j];
    }
}
cin>>l;
long long val[l][2];
for(i=0;i<l;i++){
    cin>>val[i][0]>>val[i][1];
}
for(i=0;i<l;i++){
    if( (val[i][0]<=n) && (val[i][1]<=m)){
        e1 += a[val[i][0]][val[i][1]];
    }
    else{
        e1=-1;
        break;
    }
}
for(i=0;i<l;i++){
    if((val[i][0]<=m) && (val[i][1]<=n)){
        e2 += a[val[i][1]][val[i][0]];
    }
    else{
        e2=-1;
        break;
    }
}
if(e1>e2){
    cout<<e1;
}
else{
    cout<<e2;
}
return 0;
}
