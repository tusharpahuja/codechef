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
ll t,n,i,j,yo,a1,a2,b1,b2,zer=0,dim=0,start,m;
cin>>t;
while(t--){
    cin>>n;
    zer=0;
    a1=0;
    dim=0;
    ll a[n+1][n+1];
    fo(i,n){
        fo(j,n){
            cin>>a[i][j];
            if(a[i][j]==0){
                zer++;
            }
        }
    }
    m=n;
    start = m*(m-1);
    while(m>1){
        if(zer>=start){
            cout<<dim<<endl;
            a1=1;
            break;
        }
        else{
            dim++;
            m--;
            start = m*(m-1);
        }
    }
    if(a1==0){
        cout<<dim<<endl;
    }

}



ret;
}
