#include<iostream>
using namespace std;

int main(){
long long a,b,T;
cin>>T;
while(T--){
    cin>>a>>b;
    if(a>b){
        cout<<a<<" "<<(a+b)<<endl;
    }
    else{
        cout<<b<<" "<<(a+b)<<endl;
    }
}


return 0;
}






