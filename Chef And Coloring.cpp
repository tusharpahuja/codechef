#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long long T,N,i,rcou=0,bcou=0,gcou=0,maxi,sum;
cin>>T;
while(T--){
    rcou=0;
    bcou=0;
    gcou=0;
    cin>>N;
    string a;
    cin>>a;
    for(i=0;i<N;i++){
        if(a[i]=='R'){
            rcou++;
        }
        else if(a[i]=='B'){
            bcou++;
        }
        else{
            gcou++;
        }
    }
    sum = rcou+bcou+gcou;
        if(rcou>bcou){
            maxi = rcou;
        }
        else{
            maxi = bcou;
        }
        if(maxi < gcou){
            maxi = gcou;
        }
        cout<<(sum-maxi)<<endl;

}

return 0;
}






