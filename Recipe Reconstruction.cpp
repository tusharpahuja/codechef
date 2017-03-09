#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
int t;
cin>>t;
string a,b,c;
while(t--){
    cin>>a;
    long long l1,i,l2,l3,s=1;
    l1 = strlen(a.c_str());
    long long j;
    i=0;
    j = l1-1;
    while(i<=j){
			if(a[i]=='?' && a[j]=='?'){
				s=(s*26)%(long long)10000009;
			}
			if(a[i]!='?' && a[j]!='?' && a[i]!=a[j]){
				s=0;
				break;
			}
			i++;
			j--;
    }
    cout<<s<<endl;
}
return 0;
}



