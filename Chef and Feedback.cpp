#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long T,i,len,err=0;
cin>>T;
string a,b;
while(T--){
    cin>>a;
    err=0;
    len = strlen(a.c_str());
    for(i=0;i<len-2;i++){
        if(((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='1'))||((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='0'))){
            cout<<"Good"<<endl;
            err=1;
            break;
        }
    }
    if(err==0){
        cout<<"Bad"<<endl;
    }
}
return 0;
}






