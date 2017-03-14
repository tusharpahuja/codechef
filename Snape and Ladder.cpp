#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
long double T,B,RS,LS;
long double mini,maxi;
cin>>T;
while(T--){
    cin>>B>>LS;
    mini = sqrt(pow(LS,2)-pow(B,2));
    maxi = sqrt(pow(LS,2)+pow(B,2));
    cout<<fixed<<setprecision(5)<<mini<<" ";
    cout<<fixed<<setprecision(5)<<maxi<<endl;
}

return 0;
}




