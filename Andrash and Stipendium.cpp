#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
long long T,N,i,five,four,three,two;
cin>>T;
while(T--){
    cin>>N;
    five = 0;
    four = 0;
    three = 0;
    two = 0;
    long long a[N];
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    for(i=0;i<N;i++){
        if(a[i]==2){
            two++;
        }
        else if(a[i]==3){
            three++;
        }
        else if(a[i]==4){
            four++;
        }
        else if(a[i]==5){
            five++;
        }
    }
    if(two>0){
        cout<<"No"<<endl;
    }
    else if(five==0){
        cout<<"No"<<endl;
    }
    else if(((five*5+four*4+three*3)/N)<4){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
return 0;
}




