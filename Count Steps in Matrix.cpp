#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
long long T,i,j,N,start,sum;
cin>>T;
while(T--){
    start = 1;
    sum=0;
    cin>>N;
    long long total[N*N][2];
    long long matrix[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin>>matrix[i][j];
            total[matrix[i][j]][0] = i;
            total[matrix[i][j]][1] = j;
        }
    }
    while(start<(N*N)){
        sum += abs(total[start+1][1]-total[start][1]) + abs(total[start+1][0]-total[start][0]);
        start++;
    }
    cout<<sum<<endl;
}
return 0;
}






