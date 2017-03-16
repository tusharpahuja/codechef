#include<bits/stdc++.h>
using namespace std;

int main(){
long long t,i;
cin>>t;
char a;
while(t--){
	cin>>a;
	if(a=='B'||a=='b'){
		cout<<"BattleShip"<<endl;
	}
	else if(a=='C'||a=='c'){
		cout<<"Cruiser"<<endl;
	}
	else if(a=='D'||a=='d'){
		cout<<"Destroyer"<<endl;
	}
	else if(a=='F'||a=='f'){
		cout<<"Frigate"<<endl;
	}
}


return 0;
}
