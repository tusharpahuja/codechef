#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
long long T,N,i,M,temp,er=0;
cin>>T;
while(T--){
    cin>>N;
    if(N==1){
        cout<<2<<endl;
    }
    else if((N & (N+1))==0){
        cout<<(N/2)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}
return 0;
}






