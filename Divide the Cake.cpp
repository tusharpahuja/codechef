#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long T,N,i;
cin>>T;
while(T--){
    cin>>N;
    if(360%N==0){
        cout<<"y ";
    }
    else{
        cout<<"n ";
    }
    if(N<=360){
        cout<<"y ";
    }
    else{
        cout<<"n ";
    }
    if((N*(N+1)/2)<=360){
        cout<<"y ";
    }
    else{
        cout<<"n ";
    }

}
return 0;
}






