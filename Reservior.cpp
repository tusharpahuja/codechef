#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
int t,n,m,i,j,er=0,s;
cin>>t;
while(t--){
    cin>>n>>m;
    er=0;
    char a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(j=0;j<m;j++){
        if(a[n-1][j]=='W'){
            er = 1;
            break;
        }
    }
    for(j=0;j<n;j++){
        if(a[j][0]=='W' || a[j][m-1]=='W'){
            er = 1;
            break;
        }
    }
    if(er==0){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(a[i][j]=='W'){
                        if((a[i+1][j]=='B'||a[i+1][j]=='W') && (a[i][j-1]=='B' || a[i][j-1]=='W') && (a[i][j+1]=='B' || a[i][j+1]=='W')){
                            continue;
                        }
                        else{
                            er = 1;
                            break;
                        }
                    }
                else if(a[i][j]=='B'){
                    if(a[i+1][j]=='A'){
                        er=1;
                        break;
                    }
                }
            }
            if(er==1){
                break;
            }
        }
    }
    if(er==0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}

return 0;
}







