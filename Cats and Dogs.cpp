#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long t,i,mi,ma;
cin>>t;
while(t--){
    long long c,d,l,rem;
    cin>>c>>d>>l;
    if(c>2*d){
        rem = c - 2*d;
    }
    else{
        rem = 0;
    }
    mi = 4*d + 4*rem;
    ma = 4*(d+c);
    if((l%4==0)&&(l>=mi && l<=ma)){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}
return 0;
}






