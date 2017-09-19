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
#define tc(t) ll t; cin >> t; while(t--)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
# define INF 0x3f3f3f3f
#define MAX 100000 + 2

string text;

void func()
{
    int N = (text).size();
    if(N == 0)
        return;
    N = 2*N + 1;
    int L[N];
    L[0] = 0;
    L[1] = 1;
    int C = 1,R = 2,i = 0;
    int iM,maxi = 0,maxCP = 0,start = -1,end = -1,diff = -1;

    for (i = 2; i < N; i++){
        iM  = 2*C-i;
        L[i] = 0;
        diff = R - i;
        if(diff > 0)
            L[i] = min(L[iM], diff);
        while ( ((i + L[i]) < N && (i - L[i]) > 0) &&
            ( ((i + L[i] + 1) % 2 == 0) ||
            (text[(i + L[i] + 1)/2] == text[(i - L[i] - 1)/2] )))
        {
            L[i]++;
        }

        if(L[i] > maxi)
        {
            maxi = L[i];
            maxCP = i;
        }
        if (i + L[i] > R)
        {
            C = i;
            R = i + L[i];
        }
    }
    start = (maxCP - maxi)/2;
    end = start + maxi - 1;
    string yo = text.substr(start,(start-end)).c_str();

    if(yo.size()>1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

beg{
ll n,i,j,q,a,b,c,k1,k2;
//cin>>t;
tc(t){
    //string s;
    cin>>text;
    func();

}
ret;
}

