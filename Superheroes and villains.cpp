#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<vector>
#include<string.h>
using namespace std;

int main(){
int t;
long long n,i,s=0,v=0,l,w;
cin>>t;
string a,b;
while(t--){
    cin>>n;
    s=1;
    v=1;
    w=0;
    for(i=0;i<n;i++){
        cin>>a;
        l = strlen(a.c_str());
        if(l<3){
            v++;
        }
        else{
            b = a.substr(l-3,3).c_str();
            if(b=="man"){
                s++;
            }
            else{
                v++;
            }
            if((s>=(v+2))&&(w==0)){
                w=1;
            }
            if((v>=(s+3))&&(w==0)){
                w=2;
            }
        }
    }
    if(w==1){
        cout<<"superheroes"<<endl;
    }
    else if(w==2){
        cout<<"villains"<<endl;
    }
    else{
        cout<<"draw"<<endl;
    }
}
return 0;
}






