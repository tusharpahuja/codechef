#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int GCD(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

int main(){
int t,n,b,m,i,sum=0,b1,g;
cin>>t;
while(t--){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    g = a[0];
    for(i=1;i<n;i++){
        g = GCD(a[i],g);
    }
    for(i=0;i<n;i++){
        cout<<(a[i]/g)<<" ";
    }
    cout<<endl;
}

return 0;
}




