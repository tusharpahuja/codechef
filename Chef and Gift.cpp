#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int T,n,i,k,j,done=0,cou=0,yo,ev=0;
cin>>T;
while(T--){
    cin>>n>>k;
    ev=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            ev++;
        }
    }
    if((ev==n)&&(k==0)){
        cout<<"NO"<<endl;
    }
    else{
        if(ev>=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
return 0;
}






