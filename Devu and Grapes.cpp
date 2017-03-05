#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long T,N,i,k,a,rem,sum;
cin>>T;
while(T--){
    cin>>N>>k;
    sum=0;
    for(i=0;i<N;i++){
        cin>>a;
        rem = a%k;
        if(((rem)>(k-rem))||((a-rem)<=0)){
            sum += k-rem;
        }
        else{
            sum += rem;
        }
    }
    cout<<sum<<endl;
}
return 0;
}
