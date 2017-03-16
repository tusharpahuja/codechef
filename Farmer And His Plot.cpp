    #include<iostream>
    #include<stdlib.h>
    #include<string.h>
    using namespace std;
    int fact(int A,int B){
	    int k,mini,i,f=1;
	    mini = A>B?B:A;
	    for(i=2;i<=mini;i++){
		    if((A%i==0)&&(B%i==0)){
		    	f = i;
		    }
	    }
	    return f;
    }
    int main(){
	    int T,i,A,B;
	    cin>>T;
	    while(T--){
	    	cin>>A>>B;
	    	cout<<((A/fact(A,B))*(B/fact(A,B)))<<endl;
	    }
	    return 0;
    } 


