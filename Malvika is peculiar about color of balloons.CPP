#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
int t,n,i,ac=0,bc=0;
cin>>t;
string a;
while(t--){
    cin>>a;
    bc=0;
    ac=0;
    n = strlen(a.c_str());
    for(i=0;i<n;i++){
        if(a[i]=='a'){
            ac++;
        }
        else{
            bc++;
        }
    }
    cout<<min(ac,bc)<<endl;

}
return 0;
}






