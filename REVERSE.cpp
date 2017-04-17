#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long t,i;
cin>>t;
string a;
while(t--){
    cin>>a;
    i = atoi(a.substr(0,1).c_str());
    if(i%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}
return 0;
}
