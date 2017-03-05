#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
long double T,i,dist,h1,m1,h2,m2,total1,total2,now,t,n;
cin>>T;
string a,b,c;
while(T--){
    cin>>a>>b;
    cin>>dist;
    c = a.substr(0,2);
    h1 = strtold(c.c_str(),NULL);
    c = a.substr(3,2);
    m1 = strtold(c.c_str(),NULL);

    c = b.substr(0,2);
    h2 = strtold(c.c_str(),NULL);
    c = b.substr(3,2);
    m2 = strtold(c.c_str(),NULL);

    total1 = (h1-h2-1)*60 + (60-m2) + m1;
    cout<<fixed<<setprecision(1)<<(total1+dist)<<" ";

    total2 = (h1-h2-1)*60 + (60-m2) + m1;
    if(2*dist<=total2){
        cout<<fixed<<setprecision(1)<<(total2)<<endl;
    }
    else{
        now = dist;
        n = total2 - dist;
        if(n<0){
            t = dist - (-1)*n;
            cout<<fixed<<setprecision(1)<<(dist+(t/2))<<endl;
        }
        else{
            t = dist-n;
            cout<<fixed<<setprecision(1)<<(2*dist - (t/2))<<endl;
        }
    }
}
return 0;
}






