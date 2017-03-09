#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long T,N,i,j,prev,sum=0;
cin>>T;
while(T--){
    cin>>N;
    prev = 0;
    sum = 0;
    long long a[N],b[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=0;i<N;i++){
        cin>>b[i];
    }
    for(i=0;i<N;i++){
        if(abs(a[i]-prev)>=b[i]){
            sum++;
        }
        prev = a[i];
    }
    cout<<sum<<endl;
}
return 0;
}






