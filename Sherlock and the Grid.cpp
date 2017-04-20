#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long T,N,i,j,len,cou=0,s,e;
cin>>T;
string a;
while(T--){
    cin>>N;
    char d[N][N];
    long long z1[N][1],z2[N][2];
    for(i=0;i<N;i++){
        cin>>a;
        len = strlen(a.c_str());
        for(j=0;j<len;j++){
            d[i][j] = a[j];
        }
    }
    for(i=0;i<N;i++){
        e=-1;
        j=N-1;
        cou=0;
        while(j>=0){
            if(d[i][j]=='#'){
                cou++;
                e = j;
                break;
            }
            j--;
        }
        if(cou==0){
            z1[i][0] = e;
            continue;
        }
        z1[i][0] = e;
    }
    for(i=0;i<N;i++){
        e=-1;
        j=N-1;
        while(j>=0){
            if(d[j][i]=='#'){
                cou++;
                e = j;
                break;
            }
            j--;
        }
        if(cou==0){
            z2[i][0] = e;
            continue;
        }
        z2[i][0] = e;
    }
    cou=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(d[i][j]=='.'){
                if((z1[i][0]<j)&&(z2[j][0]<i)){
                    cou++;
                }
            }
        }
    }
    cout<<cou<<endl;
}

return 0;
}






