#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
ll t,i,s,d,val,le1,le2,ta,s1;
cin>>t;
while(t--){
	s = 0;
	d = 0;
	ta = 0;
	cin>>le1;
	vector<long long> v1,v2;
	for(i=0;i<le1;i++){
		cin>>val;
		v1.push_back(val);
	}
	cin>>le2;
	for(i=0;i<le2;i++){
		cin>>val;
		v2.push_back(val);
	}
	while(s < le1){
		if(v1[s]!=v2[ta]){
			s++;
		}
		else{
			s++;
			ta++;
		}
		if(ta==le2){
            cout<<"Yes"<<endl;
            d=1;
            break;
		}
	}

	if(d==0){
        cout<<"No"<<endl;
	}


}


return 0;
}
