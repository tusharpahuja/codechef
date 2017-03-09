#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
int n,k,i,l,j,z,l1,er=0;
cin>>k>>n;
string m[k],t[n];
string b;
for(i=0;i<k;i++){
    cin>>m[i];
}
for(i=0;i<n;i++){
    cin>>t[i];
    er=0;
    l = strlen(t[i].c_str());
    if(l>=47){
        cout<<"Good"<<endl;
    }
    else{
        for(j=0;j<k;j++){
            l1 = strlen(m[j].c_str());
            if(l1>l){
                continue;
            }
            else{
                for(z=0;z<=l-l1;z++){
                    b = t[i].substr(z,l1).c_str();
                    //cout<<b<<endl;
                    if(strcmp(b.c_str(),m[j].c_str())==0){
                        cout<<"Good"<<endl;
                        er=1;
                        break;
                    }
                }
                if(er==1){
                    break;
                }
            }
        }
        if(er==0){
            cout<<"Bad"<<endl;
            //break;
        }
    }
}


return 0;
}






