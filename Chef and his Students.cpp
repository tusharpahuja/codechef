#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;

int main(){
long long t,i,l,yo=0;
cin>>t;
string s;
while(t--){
    cin>>s;
    yo=0;
    l = strlen(s.c_str());
    for(i=0;i<l;i++){
        if(s[i]=='<'){
            s[i]='>';
        }
        else if(s[i]=='>'){
            s[i]='<';
        }
    }
    for(i=0;i<l-1;i++){
        if((s[i]=='>')&&(s[i+1]=='<')){
            yo++;
        }
    }
    cout<<yo<<endl;
}
return 0;
}






