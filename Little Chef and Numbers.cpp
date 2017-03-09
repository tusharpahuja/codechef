#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long T,i,n,j,sum=0,ze=0,on=0,tw=0;
cin>>T;
while(T--){
    cin>>n;
    long long a[n],val[n];
    sum=0;
    ze=0;
    on=0;
    tw=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        if((a[i]==0)||(a[i]==1)){
            ze++;
        }
        else if(a[i]==2){
            tw++;
        }
    }
    for(i=0;i<n-1;i++){
        if((a[i]==0)||(a[i]==1)){
            ze--;
        }
        else if(a[i]==2){
            tw--;
            sum = sum + n-1-i-ze-tw;
        }
        else{
            sum = sum + n-1-i-ze;
        }
    }
    cout<<sum<<endl;
}
return 0;
}






