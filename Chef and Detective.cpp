#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long n,i;
cin>>n;
long long a[n],done[100004];
memset(done,0,sizeof(done));
for(i=0;i<n;i++){
    cin>>a[i];
    done[a[i]]++;
}
for(i=0;i<=n;i++){
    if(done[i]==0){
        cout<<i<<" ";
    }
}
return 0;
}




