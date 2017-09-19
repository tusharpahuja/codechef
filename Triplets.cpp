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

//ll bin_ser(ll low,ll high,ll key){
//
//    while(low<=high){
//        ll mid = (low+high)/2;
//        if(v1[mid]<key){
//            low = mid+1;
//        }
//        else if(v1[mid]>key){
//            high = mid-1;
//        }
//        else{
//            return (mid+1);
//        }
//    }
//    return -1;
//}

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
boostIO;
ll t,n,i,m,j,k,a,b,c,l=0,p,q,r=0,u=0,d=0,mr,ml,md,mu;
ll mod = 1000000007;
cin>>t;
while(t--){
    cin>>p>>q>>r;
    vl vp,vq,vr;
    //vl vpte,vqte,vrte;
    //map<ll,ll> mp,mq,mr;
    //set<ll> stp,stq,str;
    ll ap[p+1],aq[q+1],ar[r+1];
    clr(ap);clr(aq);clr(ar);
    ll tot = 0,one,two;
    ll sp=0,sq=0,sr=0;
    fo(i,p){
        cin>>a;
       // sp += a;
        //stp.insert(a);
        //mp[a]++;
        vp.pb(a);
    }
    fo(i,q){
        cin>>a;
        //mq[a]++;
        vq.pb(a);
        //stq.insert(a);
    }
    fo(i,r){
        cin>>a;
        //mr[a]++;
        vr.pb(a);
        //str.insert(a);
    }

    sortall(vp);
    sortall(vq);
    sortall(vr);
    fo(i,p){
        sp += vp[i]%mod;
        ap[i] = sp;
    }
    fo(i,q){
        sq += vq[i]%mod;
        aq[i] = sq;
    }
    fo(i,r){
        sr += vr[i]%mod;
        ar[i] = sr;
    }
    fo(i,q){
        one = upper_bound(vp.begin(),vp.end(),vq[i]) - vp.begin();
        two = upper_bound(vr.begin(),vr.end(),vq[i]) - vr.begin();
        //cout<<one<<" "<<two<<endl;
        if(one==0 || two==0){
            continue;
        }
        else{
            tot += ((one%mod)*(two %mod)%mod)*((vq[i]%mod)*(vq[i] %mod)%mod)%mod;
            tot += ((two%mod)*(ap[one-1] %mod)%mod)*(vq[i]%mod)%mod;
            tot += ((one%mod)*(ar[two-1] %mod)%mod)*(vq[i]%mod)%mod;
            tot += ((ap[one-1]%mod)*(ar[two-1]%mod)%mod)%mod;
        }
    }
    cout<<tot%mod<<endl;

}

ret;
}


