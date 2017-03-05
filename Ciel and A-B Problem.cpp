#include<iostream>
#include<stdlib.h>
#include<sstream>
#include<string.h>
using namespace std;

int main(){
int A,temp,d,q,r,diff,B,i,len;
stringstream st;
string a,b;
cin>>A>>B;
diff = A-B;
st<<diff;
a = st.str();
len = strlen(a.c_str());
if(a[len-1]=='9'){
    cout<<(diff-1);
}
else{
    cout<<(diff+1);
}
return 0;
}
