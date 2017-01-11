#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
string a;
cin>>a;
long long l,i,s=0,c=0,te=0,h=0,e=0,f=0;
l = strlen(a.c_str());
while(s<l){
    if(a[s]=='C'){
        c++;
    }
    else if(a[s]=='H'){
        if(c>0){
            c--;
            h++;
        }
    }
    else if(a[s]=='E'){
        if(h>0){
            h--;
            e++;
        }
    }
    else if(a[s]=='F'){
        if(e>0){
            e--;
            f++;
        }
    }
    s++;
}
cout<<f;
return 0;
}







