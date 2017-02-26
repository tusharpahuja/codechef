#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long T,N,i,c=0,r=0,start;
cin>>T;
while(T--){
    cin>>N;
    c=0;
    r=0;
    long long a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    start=0;
    for(i=N-1;i>=0;i--){
        if(start%2==0){
            c += a[i];
        }
        else{
            r += a[i];
        }
        start++;
    }
    cout<<c<<endl;
}

return 0;
}






