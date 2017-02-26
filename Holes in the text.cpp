#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long t,i,s=0,l;
cin>>t;
string a;
while(t--){
    cin>>a;
    l = strlen(a.c_str());
    s=0;
    for(i=0;i<l;i++){
        if((a[i]=='A')||(a[i]=='D')||(a[i]=='O')||(a[i]=='P')||(a[i]=='Q')||(a[i]=='R')){
            s++;
        }
        else if(a[i]=='B'){
            s+=2;
        }
    }
    cout<<s<<endl;
}
return 0;
}



