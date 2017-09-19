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
# define INF 0x3f3f3f3f
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
ll primeo[100005];
vl prime;

void seive(ll limit){
    ll i,j;
    for(i=2;i*i<limit;i++){
        if(primeo[i]==0){
            for(j=i*i;j<limit;j+=i){
                primeo[j]=1;
            }
        }
    }
    for (ll p=2; p<limit; p++)
    {
        if (primeo[p] == 0)
        {
            prime.push_back(p);
            //cout << p << "  ";
        }
    }
}

bool isprime(ll a){
    ll i;
    for(i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
boostIO;
ll t,n,i,m,j,k,a,b,c,x,y,l=0,p,q,r=0,u=0,d=0,mr,ml,md,mu;
ll limit = (1e5);
clr(primeo);
primeo[0] = 1;
primeo[1] = 1;
seive(limit);
cin>>t;
while(t--){
    cin>>a>>b;
    ll er=0;
        for(j=a;j<=b;j++){
            er=0;
            if(j==1 || j==0) continue;
            for(i=0;i<prime.size() && prime[i]*prime[i]<=j;i++){
                //cout<<prime[i]<<endl;
                if(j%prime[i]==0){
                    er=1;
                    break;
                }
            }
            //cout<<"ER"<<er<<endl;
            if(!er){
                cout<<j<<endl;
            }
        }
        //bye;
        cout<<endl;


}

ret;
}


