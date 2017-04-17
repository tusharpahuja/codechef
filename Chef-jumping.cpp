#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
long long a;
cin>>a;
if(a==0){
    cout<<"yes";
    exit(0);
}
if(((a-1)%6==0)||((a-3)%6==0)||((a-6)%6==0)){
    cout<<"yes";
}
else{
    cout<<"no";
}

return 0;
}

