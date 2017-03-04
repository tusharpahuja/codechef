#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long T,i,n,a,b,c,j,sum=0,ze=0;
cin>>T;
while(T--){
    cin>>n>>a>>b>>c;
    sum=0;
    for(i=0;i<=a;i++){
        for(j=0;j<=b;j++){
            if((i+j<=n)){
                sum += 1 + max(min(n-i-j,c),ze);
            }
        }
    }
    cout<<sum<<endl;

}
return 0;
}






