#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

#define ll long long
#define ld long double

typedef pair<int, int>	pi;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define slen(s) strlen(s)
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
#define tc(t) ll t; cin>>t; while(t--)
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
#define INF 0x3f3f3f3f
#define mod 1000000007
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

bool yoyo(const char p1 ,const char p2){
    return int(p1) > int(p2);
}
ll arr[500],n;
map<pair<ll,pll>,ll > vis;
ll dp[4][100][100][100];

ll func(ll pos,ll a1,ll a2){

    if(arr[pos]+a1<0 || arr[pos+1]+a2<0) return 0;
    else if(pos>=n && (arr[pos]+a1==0 || arr[pos+1]+a2==0)) return 1;

    ll num;

    if(a1>0 && a2<=0) num = 0;
    else if(a1<=0 && a2>0) num = 1;
    else if(a1>0 && a2>0) num = 2;
    else if(a1<=0 && a2<=0) num = 3;

    if(dp[num][pos][abs(a1)][abs(a2)]) return dp[num][pos][abs(a1)][abs(a2)];

    ll newn = arr[pos]+a1;
    ll i,j,ans=0;
    fo(i,newn+1){
        dp[num][pos][abs(a1)][abs(a2)] = (dp[num][pos][abs(a1)][abs(a2)] +func(pos+1,a2-i,i))%mod;
    }

    return dp[num][pos][abs(a1)][abs(a2)];
}

beg{
ll a,b,c,d,i,j;
tc(t){
    clr(arr);
    clr(dp);
    vis.clear();
    cin >> n;
    fo(i,n){
        cin >> arr[i];
    }
    cout << func(0,0,0) << endl;
}

ret;
}


