#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long T,p,i,sum,temp,err;
cin>>T;
while(T--){
    cin>>p;
    sum = 0;
    while(p!=0){
        if(p<=2048){
            for(i=0;i<12;i++){
                temp = 1<<i;
                if(temp==p){
                    p = 0;
                    sum++;
                    break;
                }
                else if(temp>p){
                    p = p - (1<<(i-1));
                    sum++;
                    break;
                }
            }
        }
        else{
            sum = p/2048;
            p = p%2048;
        }
    }
    cout<<sum<<endl;
}
return 0;
}




