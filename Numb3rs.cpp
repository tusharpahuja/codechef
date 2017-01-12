#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long t,i,a,b,l1,l2,n,er=0;
string n1,n2;
cin>>t;
vector<char> v1,v2;
while(t--){
    cin>>n1>>n2;
    er=0;
    l1 = strlen(n1.c_str());
    l2 = strlen(n2.c_str());
    sort(n1.begin(),n1.end());
    sort(n2.begin(),n2.end());
    if(l1!=l2){
        cout<<0<<endl;
    }
    else{
        for(i=0;i<l1;i++){
            if(n1[i]!=n2[i]){
                cout<<0<<endl;
                er=1;
                break;
            }
        }
        if(er==0){
            cout<<1<<endl;
        }
    }




}

return 0;
}







