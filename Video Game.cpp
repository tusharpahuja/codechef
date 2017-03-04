#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;

int main(){

long long N,H,i,j,mov;
cin>>N>>H;
long long a[N],f[N],place,have=0;

for(i=0;i<N;i++){
    cin>>a[i];
    f[i] = a[i];
}

place = 0;
cin>>mov;
while(mov!=0){
    if(mov == 1){
        if(place != 0){
            place--;
        }
    }
    else if(mov == 2){
        if(place != (N-1)){
            place++;
        }
    }
    else if(mov == 3){
        if(have != 1 ){
            if(f[place]!=0){
                f[place]--;
                have = 1;
            }
        }
    }
    else if(mov == 4){
        if(have != 0 ){
            if(f[place] != H){
                f[place]++;
                have = 0;
            }
        }
    }
    cin>>mov;
}

for(i=0;i<N;i++){
    cout<<f[i]<<" ";
}
return 0;
}
