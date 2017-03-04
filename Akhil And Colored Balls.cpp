#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
long long T,l1,l2,i,c=0,o=0;
cin>>T;
string x,y,z;
while(T--){
    cin>>x>>y;
    l1 = strlen(x.c_str());
    l2 = strlen(y.c_str());
    z = "";
    for(i=0;i<l1;i++){
        if((x[i]=='B')&&(y[i]=='B')){
            z.push_back('W');
        }
        else if((x[i]=='W')&&(y[i]=='W')){
            z.push_back('B');
        }
        else{
            z.push_back('B');
        }
    }
    cout<<z<<endl;
}
return 0;
}



