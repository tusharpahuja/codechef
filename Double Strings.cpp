#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
long long t,n,i;
cin>>t;
while(t--){
    cin>>n;
    if(n%2==0){
        cout<<n<<endl;
    }
    else{
        cout<<n-1<<endl;
    }
}
return 0;
}



