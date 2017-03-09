#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

long long GCD(long long a,long long b){
    long long i;
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
long long T,N,i,err=0,num,cou=0,g;
cin>>T;
while(T--){
    cin>>N;
    long long a[N];
    g=0;err=0;
    cou=0;
    for(i=0;i<N;i++){
        cin>>a[i];
        g = GCD(a[i],g);
    }
    if(g==1){
        cout<<-1<<endl;
    }
    else{
        for(i=2;i<=sqrt(g);i++){
            if(g%i==0){
                err=1;
                num=i;
                break;
            }
        }
        if(err==0){
            cout<<g<<endl;
        }
        else{
            cout<<num<<endl;
        }
    }
}
return 0;
}






