#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
string a,b;
long long l,i,t,n=0;
cin>>t;
set<string> s;
while(t--){
    cin>>a;
    s.clear();
    n=0;
    l = strlen(a.c_str());
    for(i=0;i<l-1;i++){
        b = a.substr(i,2);
        s.insert(b);
    }
    cout<<s.size()<<endl;
}

return 0;
}
