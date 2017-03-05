#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
#include<map>
using namespace std;

int main(){
long long T,i,j,n1,n2,n3,n4;
cin>>T;
long long a[4];
while(T--){
    cin>>n1>>n2>>n3>>n4;
    if((n1==0)||(n2==0)||(n3==0)||(n4==0)){
        cout<<"Yes"<<endl;
    }
    else if((n1+n2==0)||(n1+n3==0)||(n1+n4==0)){
        cout<<"Yes"<<endl;
    }
    else if((n2+n3==0)||(n2+n4==0)){
        cout<<"Yes"<<endl;
    }
    else if(n3+n4==0){
        cout<<"Yes"<<endl;
    }
    else if((n1+n2+n3==0)||(n1+n2+n4==0)||(n2+n3+n4==0)||(n1+n3+n4==0)){
        cout<<"Yes"<<endl;
    }
    else if((n1+n2+n3+n4==0)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}



