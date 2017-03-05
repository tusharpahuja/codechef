#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int w[n],m[n],i,j,s=0;
    for(i=0;i<n;i++){
        cin>>w[i];
    }
    for(i=0;i<n;i++){
        cin>>m[i];
    }
    sort(w,w+n);
    sort(m,m+n);
    i=0;j=0;
    while(i<n && j<n){
        if(w[i]<=m[j]){
            i++;
            j++;
            s++;
        }
        else{
            j++;
        }
    }
    cout<<s<<endl;
}
return 0;
}



