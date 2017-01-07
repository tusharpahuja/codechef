#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

bool pali(long long a){
    long long q,r,n=0,t=a;
    while(t>0){
        n = 10*n + t%10;
        t /= 10;
    }
    if(n==a){
        return true;
    }
    else{
        return false;
    }
}

int main(){
long long t,i,l,r,j,s;
cin>>t;
while(t--){
    cin>>l>>r;
    s=0;
    for(i=l;i<=r;i++){
        if(pali(i)){
            s += i;
        }
    }
    cout<<s<<endl;
}
return 0;
}







