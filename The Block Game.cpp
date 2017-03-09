#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int T,i,error,s;
char N[10];
cin>>T;
while(T--){
    cin>>N;
    error = 0;


        s = (strlen(N))/2;
        for(i=0;i<s;i++){
            if(N[i]!=N[s-1-i]){
                cout<<"losses"<<endl;
                error = 1;
            }
        }


    if(error==0){
        cout<<"wins"<<endl;
    }
}
return 0;
}
