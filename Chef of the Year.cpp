#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

int main(){
long long n,m1,i,c1=0,c2=0;
cin>>n>>m1;
string a,b;
string on[n];
map<string,string> m;
map<string,long long> ch;
map<string,long long> co;
for(i=0;i<n;i++){
    cin>>a>>b;
    on[i] = a;
    m[a]=b;
    ch[a]=0;
    co[b]=0;
}
for(i=0;i<m1;i++){
    cin>>a;
    ch[a]++;
    co[m[a]]++;
}
for(i=0;i<n;i++){
    if(ch[on[i]]>c1){
        c1 = ch[on[i]];
        a = on[i];
    }
    if(ch[on[i]]==c1){
        if(strcmp(on[i].c_str(),a.c_str())<0){
            a = on[i];
        }
    }
}
c2=0;
for(i=0;i<n;i++){
    if(co[m[on[i]]]>c2){
        c2 = co[m[on[i]]];
        b = m[on[i]];
    }
    if(co[m[on[i]]]==c2){
        if(strcmp(m[on[i]].c_str(),b.c_str())<0){
            b = m[on[i]];
        }
    }
}
cout<<b<<endl<<a<<endl;
return 0;
}




