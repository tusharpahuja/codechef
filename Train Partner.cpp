#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
long long T,N,Ni;
cin>>T;
while(T--){
    cin>>N;
    Ni = N%8;
    if(Ni==1){
        cout<<(N+3)<<"LB"<<endl;
    }
    else if(Ni==2){
        cout<<(N+3)<<"MB"<<endl;
    }
    else if(Ni==3){
        cout<<(N+3)<<"UB"<<endl;
    }
    else if(Ni==4){
        cout<<(N-3)<<"LB"<<endl;
    }
    else if(Ni==5){
        cout<<(N-3)<<"MB"<<endl;
    }
    else if(Ni==6){
        cout<<(N-3)<<"UB"<<endl;
    }
    else if(Ni==7){
        cout<<(N+1)<<"SU"<<endl;
    }
    else if(Ni==0){
        cout<<(N-1)<<"SL"<<endl;
    }
}

return 0;
}
