#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){

long long t1,i,n,w,j,pre,s,score=0;
cin>>t1;
while(t1--){
	cin>>n>>w;
	score=0;
	long long c[n+1],p[n+1],t[n+1];
	for(i=1;i<=n;i++){
		cin>>c[i]>>p[i]>>t[i];
	}
	long long pr[n+1][w+1];
	memset(pr,0,sizeof(pr));
	
	for(i=1;i<=n;i++){
		for(j=1;j<=w;j++){
			if(t[i]>j){
				pr[i][j] = pr[i-1][j];
			}
			else{
				pr[i][j] = max(pr[i-1][j],c[i]*p[i] + pr[i-1][j-t[i]]);	
			}
		}
	}
	
	cout<<pr[n][w]<<endl;

}





return 0;
}
