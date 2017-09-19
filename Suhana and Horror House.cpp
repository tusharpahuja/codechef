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
ll pf[102][102],pt[102][102];
ll n,m;
pair<ll,ll> finalans;

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

void bfs(){
    finalans.F = LLONG_MAX;
    finalans.S = LLONG_MAX;
    ll vis[n+1][m+1];
    clr(vis);
//    vis[0][0] = 1;
    priority_queue<pair<pl,pl>, vector<pair<pl,pl> >, greater<pair<pl,pl> > > q;

    q.push(mp(mp(pf[0][0],pt[0][0]),mp(0,0)));

    while(!q.empty()){
        pair<pl,pl> yo;
        yo = q.top();
        ll x = yo.S.F;
        ll y = yo.S.S;
        ll currp = yo.F.F;
        ll currt = yo.F.S;
        q.pop();
        if(x==n-1 && y==m-1){
            if(currp < finalans.F){
                finalans.F = currp;
                finalans.S = currt;
            }
            else if(currp > finalans.F){
                continue;
            }
            else if(currp == finalans.F){
                if(currt < finalans.S){
                    finalans.S = currt;
                }
//                else{
//                    break;
//                }
            }
        }
        else{
            if(vis[x][y]==1){
                continue;
            }
            else{
                vis[x][y] = 1;
                if(x+1<n && y<m){
                    q.push(mp(mp(currp + pf[x+1][y],currt + pt[x+1][y]),mp(x+1,y)));
                }
                if(x-1>=0 && y<m){
                    q.push(mp(mp(currp + pf[x-1][y],currt + pt[x-1][y]),mp(x-1,y)));
                }
                if(x<n && y+1<m){
                    q.push(mp(mp(currp + pf[x][y+1],currt + pt[x][y+1]),mp(x,y+1)));
                }
                if(x<n && y-1>=0){
                    q.push(mp(mp(currp + pf[x][y-1],currt + pt[x][y-1]),mp(x,y-1)));
                }
            }
        }

    }
    return;
}


beg{
ll k,t,a,b,c,su=0,i,j,l;
cin>>t;
while(t--){
    cin>>n>>m;
    ll hor=0,tim=0;

    fo(i,n){
        fo(j,m){
            cin>>pf[i][j];
        }
    }
    fo(i,n){
        fo(j,m){
            cin>>pt[i][j];
        }
    }
    bfs();
    //ll mpf[n+1][m+1],mpt[n+1][m+1];
    cout<<finalans.F<<" "<<finalans.S<<endl;
}
ret;
}


