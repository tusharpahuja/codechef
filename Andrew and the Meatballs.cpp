#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
long long T,i,N,M,sum=0,cou;
cin>>T;
while(T--){
    cin>>N>>M;
    sum=0;
    cou=0;
    long long a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    for(i=N-1;i>=0;i--){
        if(sum>=M){
            break;
        }
        sum += a[i];
        cou++;
    }
    if(sum<M){
        cout<<-1<<endl;
    }
    else{
        cout<<cou<<endl;
    }
}
return 0;
}






