#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;

int main(){
int T,i,len,cou;
cin>>T;
string a;
char in;
while(T--){
    cin>>a;
    cou=2;
    len = strlen(a.c_str());
    for(i=1;i<len;i++){
        if(int(a[i])>= int(a[i-1])){
            cou += abs(int(a[i]) - int(a[i-1]));

        }
        else{
            cou += abs(int(a[i]) - int('a')) + abs(int('z') - int(a[i-1])) + 1;
        }
        cou++;
    }
    if(cou<=11*len){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}






