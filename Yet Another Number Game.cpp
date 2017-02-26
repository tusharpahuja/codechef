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
    cin>>a;
    if(a%2==0){
        cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
    }
}
return 0;
}



