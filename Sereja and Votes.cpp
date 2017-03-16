#include<bits/stdc++.h>
using namespace std;

int main(){
long double t,n,i,a,s=0,re,zer=0;
cin>>t;
while(t--){
	vector<long long> v1;
	cin>>n;
	s=0;
	zer=0;
	for(i=0;i<n;i++){
		cin>>a;
		s += a;
		if(a==0){
			zer++;
		}
		v1.push_back(a);
	}
	re = n-zer;
	//cout<<re<<endl;
	if(s<100 | s>=(100+re)){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl;	
	}
	
}


return 0;
}
