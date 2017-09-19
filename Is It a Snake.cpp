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
char ch[4][500+2],te1[4][500+2],te2[4][500+2],te3[4][500+2],ah1[4][500+2],ah2[4][500+2],ah3[4][500+2];
void clearr(char arr[4][502])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<502;j++)
        {
            arr[i][j]='.';
        }
    }
}
beg{
    boostIO;
    ll t,n,i,m,j,k,l=0,u=0,d=0,err;
    cin>>t;
    while(t--){
        clearr(ch);clearr(te1);clearr(te2);clearr(te3);clearr(ah1);clearr(ah2);clearr(ah3);
        cin>>n;

        ll s1=-1,s2=-1,e1=-1,e2=-1,yo,d1=0,d2=0,m1,god=0,m2,t1,t2,err1,err2,err3,n1,n2,n3;
        u=0;
        l=0;
        err1=0;
        err2=0;
        err3=0;
        n1=0;
        n2=0;
        n3=0;

        fo(i,n){
            cin>>ch[0][i];
            if(ch[0][i]=='#')u++;
            te1[0][i] = ch[0][i];
            te2[0][i] = ch[0][i];
            te3[0][i] = ch[0][i];
            ah1[0][i] = ch[0][i];
            ah2[0][i] = ch[0][i];
            ah3[0][i] = ch[0][i];
            if(ch[0][i]=='#' && d1==0){
                m1 = 0;
                m2 = i;
                d1 = 1;
            }
        }
        fo(i,n){
            cin>>ch[1][i];
            if(ch[1][i]=='#')u++;
            te1[1][i] = ch[1][i];
            te2[1][i] = ch[1][i];
            te3[1][i] = ch[1][i];
            ah1[1][i] = ch[1][i];
            ah2[1][i] = ch[1][i];
            ah3[1][i] = ch[1][i];
            if(ch[1][i]=='#' && d2==0){
                e1 = 1;
                e2 = i;
                d2 = 1;
            }
        }
        if( d1 == 0 && d2 != 0 ){
            s1 = e1;
            s2 = e2;
        }
        else if( d2 == 0 && d1!=0 ){
            s1 = m1;
            s2 = m2;
        }
        else if(d1!=0 && d2!=0){
            if(m2<e2){
                s1 = 0;
                s2 = m2;
            }
            else if(m2>e2){
                s1 = 1;
                s2 = e2;
            }
            else{
                god=1;
                s1 = 0;
                s2 = m2;
            }
        }
        t1 = s1;
        t2 = s2;
        l=0;
        if(s1==0 && god==0){
            if(ch[s1+1][s2]=='#' && ch[s1][s2+1]=='.'){
                te1[t1][t2] = 'D';
                t1++;
                l++;
                while(l!=u && t2<n){
                    te1[t1][t2] = 'D';
                    l++;
                    if(l==u){
                        break;
                    }
                    if(t1==1){
                        if(t2!=n-1){
                            if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                err1=1;
                                break;
                            }
                            else if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1--;
                            }
                        }
                        else{
                            if(te1[0][t2]=='#'){
                                t1--;
                            }
                            else{
                                err1=1;
                                break;
                            }
                        }
                    }
                    else{
                        if(t2!=n-1){
                            if((te1[1][t2]=='D' || te1[1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                err1=1;
                                break;
                            }
                            else if((te1[1][t2]=='D' || te1[1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1++;
                            }
                        }
                        else{
                            if(te1[1][t2]=='#'){
                                t1++;
                            }
                            else{
                                err1=1;
                                break;
                            }
                        }
                    }
                }
                if(l!=u)err1=1;
                    }
            else{
                err1=1;
            }
            l=0;
            t1=s1;
            t2=s2;
            if(ch[s1+1][s2]=='.' && ch[s1][s2+1]=='#'){

                te2[t1][t2] = 'D';
                t2++;
                l++;

                while(l!=u && t2<n){
                    te2[t1][t2] = 'D';
                    l++;
                    if(l==u){
                        //cout<<"yo"<<endl;
                        break;
                    }
                    if(t1==1){
                        if(t2!=n-1){
                            if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                err2=1;
                                break;
                            }
                            else if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1--;
                            }
                        }
                        else{
                            if(te2[0][t2]=='#'){
                                t1--;
                            }
                            else{
                                err2=1;
                                break;
                            }
                        }
                    }
                    else{
                        if(t2!=n-1){
                            if((te2[1][t2]=='D' || te2[1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                err2=1;
                                break;
                            }
                            else if((te2[1][t2]=='D' || te2[1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1++;
                            }
                        }
                        else{
                            if(te2[1][t2]=='#'){
                                t1++;
                            }
                            else{
                                err2=1;
                                break;
                            }
                        }
                    }
                }
                if(l!=u)err2=1;
                    else{
                        err2=0;
                    }
            }
            else{
                err2=1;
            }
            l=0;

            t1=s1;
            t2=s2;
            if(ch[s1+1][s2]=='#' && ch[s1][s2+1]=='#'){
                te3[t1][t2] = 'D';
                t1++;
                l++;
                while(l!=u && t2<n){
                    te3[t1][t2] = 'D';
                    l++;
                    if(l==u){
                        break;
                    }
                    if(t1==1){
                        if(t2!=n-1){
                            if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                err3=1;
                                break;
                            }
                            else if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1--;
                            }
                        }
                        else{
                            if(te3[0][t2]=='#'){
                                t1--;
                            }
                            else{
                                err3=1;
                                break;
                            }
                        }
                    }
                    else{
                        if(t2!=n-1){
                            if((te3[1][t2]=='D' || te3[1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                err3=1;
                                break;
                            }
                            else if((te3[1][t2]=='D' || te3[1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                t2++;
                            }
                            else{
                                t1++;
                            }
                        }
                        else{
                            if(te3[1][t2]=='#'){
                                t1++;
                            }
                            else{
                                err3=1;
                                break;
                            }
                        }
                    }
                }
                if(l!=u)err3=1;
                    }
            else{
                err3=1;
            }
            if(ch[s1+1][s2]=='.' && ch[s1][s2+1]=='.'){
                if(u==1){
                    err1=0;
                }
                else{
                    err1=1;
                    err2=1;
                    err3=1;
                }
            }
            if(u==1){
                err1=0;
            }
            if(!err1 || !err2 || !err3){
                cout<<"yes"<<endl;
                }
                else{
                    cout<<"no"<<endl;
                }
                }
                else if(s1==1){
                    if(ch[s1-1][s2]=='#' && ch[s1][s2+1]=='.'){
                        te1[t1][t2] = 'D';
                        t1--;
                        l++;
                        while(l!=u && t2<n){
                            te1[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                        err1=1;
                                        break;
                                    }
                                    else if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te1[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err1=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te1[1][t2]=='D' || te1[1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                        err1=1;
                                        break;
                                    }
                                    else if((te1[1][t2]=='D' || te1[1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te1[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err1=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err1=1;
                    }
                    else{
                        err1=1;
                    }
                    l=0;
                    t1=s1;
                    t2=s2;
                    if(ch[s1-1][s2]=='.' && ch[s1][s2+1]=='#'){
                        //cout<<"yo"<<endl;
                        te2[t1][t2] = 'D';
                        t2++;
                        l++;
                        //cout<<l<<" "<<u<<" "<<t2<<" "<<n<<endl;
                        //bye;
                        while(l!=u && t2<n){
                            te2[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                //cout<<"yo"<<endl;
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                        err2=1;
                                        break;
                                    }
                                    else if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te2[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err2=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te2[1][t2]=='D' || te2[1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                        err2=1;
                                        break;
                                    }
                                    else if((te2[1][t2]=='D' || te2[1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te2[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err2=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err2=1;
                        else{
                            err2=0;
                        }
                    }
                    else{
                        err2=1;
                    }
                    l=0;

                    t1=s1;
                    t2=s2;
                    if(ch[s1-1][s2]=='#' && ch[s1][s2+1]=='#'){
                        te3[t1][t2] = 'D';
                        t1--;
                        l++;
                        while(l!=u && t2<n){
                            te3[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                        err3=1;
                                        break;
                                    }
                                    else if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te3[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err3=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te3[1][t2]=='D' || te3[1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                        err3=1;
                                        break;
                                    }
                                    else if((te3[1][t2]=='D' || te3[1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te3[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err3=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err3=1;
                    }
                    else{
                        err3=1;
                    }
                    if(ch[s1-1][s2]=='.' && ch[s1][s2+1]=='.'){
                        if(u==1){
                            err1=0;
                        }
                        else{
                            err1=1;
                            err2=1;
                            err3=1;
                        }
                    }
                    if(u==1){
                        err1=0;
                    }
                    if(!err1 || !err2 || !err3){
                        cout<<"yes"<<endl;
                    }
                    else{
                        cout<<"no"<<endl;
                    }
                }
                else if(god==1){
                    s1 = 1;
                    s2 = e2;
                    t1 = s1;
                    t2 = s2;
                    if(ch[s1-1][s2]=='#' && ch[s1][s2+1]=='.'){
                        te1[t1][t2] = 'D';
                        t1--;
                        l++;
                        while(l!=u && t2<n){
                            te1[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                        err1=1;
                                        break;
                                    }
                                    else if((te1[t1-1][t2]=='D' || te1[t1-1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te1[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err1=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te1[1][t2]=='D' || te1[1][t2]=='.' )&& te1[t1][t2+1]=='.'){
                                        err1=1;
                                        break;
                                    }
                                    else if((te1[1][t2]=='D' || te1[1][t2]=='.' ) && te1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te1[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err1=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err1=1;
                    }
                    else{
                        err1=1;
                    }
                    l=0;
                    t1=s1;
                    t2=s2;
                    if(ch[s1-1][s2]=='.' && ch[s1][s2+1]=='#'){
                        //cout<<"yo"<<endl;
                        te2[t1][t2] = 'D';
                        t2++;
                        l++;
                        //cout<<l<<" "<<u<<" "<<t2<<" "<<n<<endl;
                        //bye;
                        while(l!=u && t2<n){
                            te2[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                //cout<<"yo"<<endl;
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                        err2=1;
                                        break;
                                    }
                                    else if((te2[t1-1][t2]=='D' || te2[t1-1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te2[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err2=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te2[1][t2]=='D' || te2[1][t2]=='.' )&& te2[t1][t2+1]=='.'){
                                        err2=1;
                                        break;
                                    }
                                    else if((te2[1][t2]=='D' || te2[1][t2]=='.' ) && te2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te2[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err2=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err2=1;
                        else{
                            err2=0;
                        }
                    }
                    else{
                        err2=1;
                    }
                    l=0;

                    t1=s1;
                    t2=s2;
                    if(ch[s1-1][s2]=='#' && ch[s1][s2+1]=='#'){
                        te3[t1][t2] = 'D';
                        t1--;
                        l++;
                        while(l!=u && t2<n){
                            te3[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                        err3=1;
                                        break;
                                    }
                                    else if((te3[t1-1][t2]=='D' || te3[t1-1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(te3[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        err3=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((te3[1][t2]=='D' || te3[1][t2]=='.' )&& te3[t1][t2+1]=='.'){
                                        //cout<<"yo"<<endl;
                                        err3=1;
                                        break;
                                    }
                                    else if((te3[1][t2]=='D' || te3[1][t2]=='.' ) && te3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(te3[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        err3=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)err3=1;
                    }
                    else{
                        err3=1;
                    }
                    if(ch[s1-1][s2]=='.' && ch[s1][s2+1]=='.'){
                        if(u==1){
                            err1=0;
                        }
                        else{
                            err1=1;
                            err2=1;
                            err3=1;
                        }
                    }
                    if(u==1){
                        err1=0;
                    }
                    //cout<<err1<<" "<<err2<<" "<<err3<<endl;
                    s1 = 0;
                    s2 = m2;
                    t1 = s1;
                    t2 = s2;
                    l=0;
                    //        cout<<s1<<" "<<s2<<endl;
                    //        cout<<err1<<" "<<err2<<" "<<err3<<endl;

                    if(ch[s1+1][s2]=='#' && ch[s1][s2+1]=='.'){
                        ah1[t1][t2] = 'D';
                        t1++;
                        l++;
                        while(l!=u && t2<n){
                            ah1[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((ah1[t1-1][t2]=='D' || ah1[t1-1][t2]=='.' )&& ah1[t1][t2+1]=='.'){
                                        n1=1;
                                        break;
                                    }
                                    else if((ah1[t1-1][t2]=='D' || ah1[t1-1][t2]=='.' ) && ah1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(ah1[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        n1=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((ah1[1][t2]=='D' || ah1[1][t2]=='.' )&& ah1[t1][t2+1]=='.'){
                                        n1=1;
                                        //cout<<"yo"<<endl;
                                        break;
                                    }
                                    else if((ah1[1][t2]=='D' || ah1[1][t2]=='.' ) && ah1[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(ah1[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        n1=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)n1=1;
                    }
                    else{
                        n1=1;
                    }
                    //cout<<n1<<endl;
                    l=0;
                    t1=s1;
                    t2=s2;
                    if(ch[s1+1][s2]=='.' && ch[s1][s2+1]=='#'){
                        //cout<<"yo"<<endl;
                        ah2[t1][t2] = 'D';
                        t2++;
                        l++;
                        //cout<<l<<" "<<u<<" "<<t2<<" "<<n<<endl;
                        //bye;
                        while(l!=u && t2<n){
                            ah2[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                //cout<<"yo"<<endl;
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((ah2[t1-1][t2]=='D' || ah2[t1-1][t2]=='.' )&& ah2[t1][t2+1]=='.'){
                                        n2=1;
                                        break;
                                    }
                                    else if((ah2[t1-1][t2]=='D' || ah2[t1-1][t2]=='.' ) && ah2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(ah2[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        n2=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((ah2[1][t2]=='D' || ah2[1][t2]=='.' )&& ah2[t1][t2+1]=='.'){
                                        n2=1;
                                        break;
                                    }
                                    else if((ah2[1][t2]=='D' || ah2[1][t2]=='.' ) && ah2[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(ah2[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        n2=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)n2=1;
                        else{
                            n2=0;
                        }
                    }
                    else{
                        n2=1;
                    }
                    l=0;

                    t1=s1;
                    t2=s2;
                    if(ch[s1+1][s2]=='#' && ch[s1][s2+1]=='#'){
                        ah3[t1][t2] = 'D';
                        t1++;
                        l++;
                        while(l!=u && t2<n){
                            ah3[t1][t2] = 'D';
                            l++;
                            if(l==u){
                                break;
                            }
                            if(t1==1){
                                if(t2!=n-1){
                                    if((ah3[t1-1][t2]=='D' || ah3[t1-1][t2]=='.' )&& ah3[t1][t2+1]=='.'){
                                        n3=1;
                                        break;
                                    }
                                    else if((ah3[t1-1][t2]=='D' || ah3[t1-1][t2]=='.' ) && ah3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1--;
                                    }
                                }
                                else{
                                    if(ah3[0][t2]=='#'){
                                        t1--;
                                    }
                                    else{
                                        n3=1;
                                        break;
                                    }
                                }
                            }
                            else{
                                if(t2!=n-1){
                                    if((ah3[1][t2]=='D' || ah3[1][t2]=='.' )&& ah3[t1][t2+1]=='.'){
                                        n3=1;
                                        break;
                                    }
                                    else if((ah3[1][t2]=='D' || ah3[1][t2]=='.' ) && ah3[t1][t2+1]=='#'){
                                        t2++;
                                    }
                                    else{
                                        t1++;
                                    }
                                }
                                else{
                                    if(ah3[1][t2]=='#'){
                                        t1++;
                                    }
                                    else{
                                        n3=1;
                                        break;
                                    }
                                }
                            }
                        }
                        if(l!=u)n3=1;
                    }
                    else{
                        n3=1;
                    }
                    if(ch[s1+1][s2]=='.' && ch[s1][s2+1]=='.'){
                        if(u==1){
                            n1=0;
                        }
                        else{
                            n1=1;
                            n2=1;
                            n3=1;
                        }
                    }
                    if(u==1){
                        err1=0;
                    }
                    if(!err1 || !err2 || !err3 || !n1 || !n2 || !n3){
                        cout<<"yes"<<endl;
                    }
                    else{
                        cout<<"no"<<endl;
                    }

                }

                }

                ret;
                }
