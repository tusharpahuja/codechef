#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long N,i,ind,err=0;
while(true){
    cin>>N;
    err =0;
    if(N==0){
        exit(0);
    }
    vector<long long> a(N),b;
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=1;i<=N;i++){
        ind = find(a.begin(),a.end(),i) - a.begin();
        b.push_back(ind+1);
        if(a[i-1]!=ind+1){
            cout<<"not ambiguous"<<endl;
            err = 1;
            break;
        }
    }
    if(err==0){
        cout<<"ambiguous"<<endl;
    }
}
return 0;
}




