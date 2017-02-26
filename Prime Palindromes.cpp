#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long n,i,a,b,j,er=0,re;
cin>>n;
i = n-1;
while(true){
    i++;
    a = i;
    b=0;
    er=0;
    while(a>9){
        re = a%10;
        b = b*10 + re;
        a = a/10;
    }
    b = b*10 + a;
    if(b==i){
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                er=1;
                break;
            }
        }
        if(er==0){
            cout<<i;
            exit(0);
        }
    }
}

return 0;
}



