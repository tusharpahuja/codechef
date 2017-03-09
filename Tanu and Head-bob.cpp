#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
int T,N,i,ycou=0,ncou=0,icou=0;
cin>>T;
string a;
while(T--){
    cin>>N;
    cin>>a;
    ycou=0;
    ncou=0;
    icou=0;
    for(i=0;i<N;i++){
        if(a[i]=='Y'){
            ycou++;
        }
        else if(a[i]=='N'){
            ncou++;
        }
        else{
            icou++;
        }
    }
    if((ncou==N)||((icou>0)&&(ycou>0))){
        cout<<"NOT SURE"<<endl;
    }
    else if(icou>0){
        cout<<"INDIAN"<<endl;
    }
    else{
        cout<<"NOT INDIAN"<<endl;
    }
}

return 0;
}

