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
ll k,n,t,m,a,b,c,su=0,i,j,l;
cin>>t;
cin.ignore();
while(t--){
    string s;
    ll len,i;
    vector<string> v;
    //cin.ignore();
//    stringstream ss;
    getline(cin,s,'\n');
    //cout<<s<<endl;
    len = s.size();
    //cout<<len<<endl;
    string b1="";
    fo(i,len){
        //cout<<s[i];
        if(s[i]==' '){
            v.pb(b1);
            b1 = "";
        }
        else{
            b1 += s[i];
        }
    }
    v.pb(b1);

    //bye;
   // cout<<v[0];
    //bye;
    if(v.size()==1){
        b1 = v[0];
//        if(b1[0]>='a' && b1[0]<='z'){
//            b1[0] = (char)((int)b1[0] - 32);
//        }
        b1[0] = char(toupper(b1[0]));
        for(i=1;i<b1.size();i++){
//            if(b1[0]>='A' && b1[0]<='Z'){
//                b1[0] = (char)((int)b1[i] + 32);
//            }
            b1[i] = char(tolower(b1[i]));
        }
        cout<<b1;
    }
    else{
        fo(i,v.size()-1){

            b1 = v[i];
            b1[0] = char(toupper(b1[0]));
            cout<<b1[0]<<". ";
        }
        b1 = v[v.size()-1];
        cout<<char(toupper(v[v.size()-1][0]));
        for(i=1;i<v[v.size()-1].size();i++){
            cout<<char(tolower(v[v.size()-1][i]));
        }
    }
    cout<<endl;

}
ret;
}


