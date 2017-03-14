#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

bool isprime(long long n){
    long long i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
long long T,x,y,i,sum,sum1;
cin>>T;
while(T--){
    cin>>x>>y;
    sum = x+y;
    sum1 = sum;
    if(sum%2==0){
        i=1;
        while(true){
            sum1 = sum + i;
            if(isprime(sum1)){
                cout<<i<<endl;
                break;
            }
            i += 2;
        }
    }
    else{
        i=2;
        while(true){
            sum1 = sum + i;
            if(isprime(sum1)){
                cout<<i<<endl;
                break;
            }
            i += 2;
        }
    }
}
return 0;
}






