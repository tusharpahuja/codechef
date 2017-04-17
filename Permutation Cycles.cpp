#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
int n,i,j,s=1,d=0,pre,er=0;
cin>>n;
int a[n+1][2];
vector< vector<int> > v;
vector<int> t;
for(i=1;i<=n;i++){
    cin>>a[i][0];
    a[i][1] = 0;
}
while(d<n){
    t.clear();
    er=0;
    while(a[s][1]==0){
        pre = a[s][0];
        a[s][1] = 1;
        d++;
        t.push_back(s);
        s = pre;
        //cout<<s<<endl;
        er=1;
    }
    if(er==0){
        s++;
    }
    else{
        t.push_back(t[0]);
        v.push_back(t);
    }
}
cout<<v.size()<<endl;
for(i=0;i<v.size();i++){
    for(j=0;j<v[i].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
