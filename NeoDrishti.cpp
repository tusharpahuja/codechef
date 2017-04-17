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
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
ll t,n,i,j,a,s=0,m1,m2;
cin>>t;
while(t--){
	cin>>n;
	vl v1,v2;
	s=0;
	fo(i,n){
		cin>>a;
		v1.pb(a);
		v2.pb(a);
	}
	//sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),greater<ll>());
	i=0;
	j=n-1;
	while(i<j){
        m1 = v2[i];
        if(m1>=50){
            i++;
            s++;
        }
        else{
            m2 = ceil(float(50-m1)/m1);
            if(j>=i+m2){
                j -= m2;
                s++;
                i++;
            }
            else{
                break;
            }
        }
	}
	if(i==j && v2[i]>=50){
        s++;
	}
    cout<<s<<endl;
}


ret;
}


/*
5
50 30 20 10 5

6

10 5 40 52 30 8

52 40 30 10 8 5

*/


