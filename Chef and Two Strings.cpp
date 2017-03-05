#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
long t;
int n,i,l1,l2,a,c1=0,c2=0,q1,q2,c=0;
cin>>t;
string s1,s2;
while(t--){
    cin>>s1>>s2;
    c=0;
    c1=0;
    c2=0;
    q1=0;
    q2=0;
    l1 = strlen(s1.c_str());
    l2 = strlen(s2.c_str());
    for(i=0;i<l1;i++){
        if((s1[i]=='?')||(s2[i]=='?')){
            c2++;
        }
        else{
            if(s1[i]!=s2[i]){
                c1++;
                c2++;
            }

        }
    }
    cout<<c1<<" "<<c2<<endl;
    //exit(0);
}
return 0;
}






