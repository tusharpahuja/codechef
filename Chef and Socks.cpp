#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
long long jc,cost,money,total;
cin>>jc>>cost>>money;
money = money - jc;
total = money / cost;

if(total%2==0){
    cout<<"Lucky Chef";
}
else{
    cout<<"Unlucky Chef";
}
return 0;
}
