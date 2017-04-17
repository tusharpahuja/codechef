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
ll t,o1,o2,i,j,k,te,one=0,zero=0,d=0,tot=0,hm=0,ps;
cin>>t;
while(t--){
    cin>>o1>>o2;
    one=0;
    zero=0;
    d=0;
    vl v1;
    ll v2[o1+1];
    hm=0;
    //while(true){
        fo(i,o1){

                fo(j,o2){
                    cin>>te;

                    v1.pb(te);
                }

        }


    fo(i,o1){
        tot = 0;
        fo(j,o2){
            tot += v1[i*o2 + j];
        }
        v2[i] = tot;
        one += (2*tot > o2);
    }

    if(2*one > o1){
        cout<<1<<endl;
        continue;
    }
    one = 0;

    for(i=1;i<=o2-1;i++){
        one = 0;
        tot = 0;
        v2[0] = v2[0] + v1[o2 + i - 1] - v1[i-1];
        one += (2*v2[0] > o2);
        for(j=1;j<o1;j++){
            v2[j] = v2[j] + v1[((j+1)*o2 + i - 1)%(o1*o2)] - v1[((j)*o2 + i-1)%(o1*o2)];
            one += (2*v2[j] > o2);
        }
        if(2*one > o1){
            cout<<1<<endl;
            d=1;
            break;
        }
    }

    if(d==0){
        cout<<0<<endl;
    }
}

ret;
}
