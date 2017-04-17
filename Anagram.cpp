#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
long long t,i,l1,l2,er=0;
cin>>t;
string a,b;
while(t--){
    cin>>a>>b;
    er=1;
    l1 = strlen(a.c_str());
    l2 = strlen(b.c_str());
    int c1[27],c2[27];
    memset(c1,0,sizeof(c1));
    memset(c2,0,sizeof(c2));
    if(l1!=l2){
        cout<<"NO"<<endl;
    }
    else{
        for(i=0;i<l1;i++){
            c1[int(a[i])-96]++;
            c2[int(b[i])-96]++;
        }
        for(i=1;i<27;i++){
            if(c1[i]!=c2[i]){
                er=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(er==1){
            cout<<"YES"<<endl;
        }
    }
}
return 0;
}
