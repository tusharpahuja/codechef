#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long t,n,i,c,s;
cin>>t;
while(t--){
    cin>>n>>c;
    s=0;
    long long a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s += a[i];
    }
    if(s<=c){

        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}






