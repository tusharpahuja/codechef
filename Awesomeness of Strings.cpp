#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
string a;
long long l,i,s=0,co=0,ma=0,masc,asc;
char te,val;
cin>>a;
l = strlen(a.c_str());
while(s<l){
    co=1;
    te = a[s];
    asc = int(te);
    s++;
    while(a[s]==te){
        s++;
        if(s>=l){
            if(co>ma){
                ma= co;
                val = te;
            }
        }
        co++;
    }
    if(co>ma){
        ma= co;
        masc = asc;
        val = te;
    }
    else if(co==ma){
        if(asc<masc){
            ma = co;
            masc = asc;
            val = te;
        }
    }
}
cout<<val<<endl<<ma;
return 0;
}
