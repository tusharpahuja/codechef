#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long N,i,D,cou=0;
cin>>N>>D;
long long a[N];
for(i=0;i<N;i++){
    cin>>a[i];
}
sort(a,a+N);
i=0;
while(i<N-1){
    if(abs(a[i]-a[i+1])<=D){
        cou++;
        i = i+2;
    }
    else{
        i++;
    }
}
cout<<cou;
return 0;
}






