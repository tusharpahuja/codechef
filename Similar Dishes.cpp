#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ld long double
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

beg{
ll t,n,i,m,j,k,a,b,c,l=0,r=0,u=0,d=0,mr,ml,md,mu;
cin>>t;
while(t--){
    vector<string> v1,v2,v3;
    vector<string>::iterator it;
    l=0;
    string s;
    fo(i,4){
        cin>>s;
        v1.pb(s);
    }
    fo(i,4){
        cin>>s;
        it = find(v1.begin(),v1.end(),s);
        if(it != v1.end()){
            l++;
        }
    }
    if(l>1){
        cout<<"similar"<<endl;
    }
    else{
        cout<<"dissimilar"<<endl;
    }

}

ret;
}


