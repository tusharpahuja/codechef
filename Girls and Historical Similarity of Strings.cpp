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
while(t--){
    string s1,s2;
    cin>>s1>>s2;
    ll len1,len2;
    len1 = s1.size();
    len2 = s2.size();
    map<char,ll> m1,m2;
    ll arr1[len1+1],arr2[len2+1];
    ll pr1[len1+1],pr2[len2+1];
    ll co1=0,co2=0;
    if(s1==s2){
        cout<<"YES"<<endl;
    }
    else{
        set<char> st1,st2;
        fo(i,len1){
            st1.insert(s1[i]);
            if(i==0){
                arr1[i] = 1;
                pr1[i]=0;
                m1[s1[i]]++;
                co1++;
            }
            else{
                if(s1[i]==s1[i-1]){
                    arr1[i] = 1+arr1[i-1];
                    pr1[i]=0;
                }
                else{
                    if(m1[s1[i]]>0){
                        pr1[i]=1;
                    }
                    else{
                        pr1[i]=0;
                    }
                    arr1[i] = 1;
                    m1[s1[i]]++;
                    co1++;
                }
            }
        }
        fo(i,len2){
            st2.insert(s2[i]);
            if(i==0){
                arr2[i] = 1;
                pr2[i]=0;
                m2[s2[i]]++;
                co2++;
            }
            else{
                if(s2[i]==s2[i-1]){
                    arr2[i] = 1+arr2[i-1];
                    pr2[i]=0;
                }
                else{
                    if(m2[s2[i]]>0){
                        pr2[i]=1;
                    }
                    else{
                        pr2[i]=0;
                    }
                    arr2[i] = 1;
                    m2[s2[i]]++;
                    co2++;
                }
            }
        }
        ll err=0;
        fo(i,len1){
            if(arr1[i]!=arr2[i] || pr1[i]!=pr2[i]){
                err=1;
                break;
            }
        }
        co1=st1.size();
        co2=st2.size();
        //cout<<co1<<" "<<co2<<endl;
        if(err || co1==26 || co1!=co2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }


}
ret;
}


