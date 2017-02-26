#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long t;
int n,m,i;
cin>>t;
while(t--){
    cin>>n>>m;
    if(((n*m)%2)==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}






