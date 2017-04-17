#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
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
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

beg{
ll t,n,i,j,yo,a1,a2,b1,b2;
cin>>t;
while(t--){
    cin>>n;
    vl v1,v2;
    a1=0;
    a2=0;
    b1=0;
    b2=0;
    fo(i,n){
        cin>>yo;
        if(i%2==0){
            a1 += yo;
        }
        else{
            a2 += yo;
        }
        v1.pb(yo);
    }

    fo(i,n){
        cin>>yo;
        if(i%2==0){
            b1 += yo;
        }
        else{
            b2 += yo;
        }
        v2.pb(yo);
    }

    cout<<min((b1+a2),(a1+b2))<<endl;
}



ret;
}
