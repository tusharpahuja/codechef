#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main() {
	long long t,n,i,j,l,zc=0,oc=0;
	cin>>t;
	string s;
	while(t--){
	    cin>>s;
	    zc=0;
	    oc=0;
	    l = strlen(s.c_str());
	    for(i=0;i<l;i++){
            if(s[i]=='0'){
                zc++;
            }
            else{
                oc++;
            }
	    }
	    if(zc==(l-1) || oc==(l-1)){
            cout<<"Yes"<<endl;
	    }
	    else{
            cout<<"No"<<endl;
	    }
	}
	return 0;
}
