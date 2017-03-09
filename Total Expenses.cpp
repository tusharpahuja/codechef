#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main(){
int T,i;
double q=0.0,p=0.0,a=0.0;
cin>>T;
while(T--){
    cin>>q>>p;
    a=q*p*(1.0);
    if(q>1000){
        a = a * (0.9);
    }
    cout<<setprecision(6)<<fixed<<a<<endl;
}
return 0;
}
