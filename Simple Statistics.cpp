#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
long double T,K,sum;
long long N,i;
cin>>T;
while(T--){
    cin>>N>>K;
    sum=0;
    long double a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    sort(a,a+N);
    for(i=K;i<N-K;i++){
        sum += a[i];
    }
    cout<<fixed<<setprecision(6)<<(sum/(N-2*K))<<endl;
}
return 0;
}

