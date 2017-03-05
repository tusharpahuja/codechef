#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long t,a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    if(a==b){
        cout<<"="<<endl;
    }
    else if(a>b){
        cout<<">"<<endl;
    }
    else{
        cout<<"<"<<endl;
    }
}
return 0;
}



