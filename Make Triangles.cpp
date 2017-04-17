#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)
#define ull unsigned long long
#define ll long long
#define pb push_back

#define beg int main()
#define ret return 0
#define bye exit(0)

typedef vector<ll> vl;



beg{
ll n,l,r,i,j,k,te,c=0,val=0,mi=1e18,ma=0,po1,po2,mis,mas,d=0,res,one,one1,one2,two,two1,two2,temp,ultmax=0,yo1=0,yo2=1e18,rem = 1e18;
cin>>n>>l>>r;
vl v1;
vector<pair<ll,ll> >vf;

fo(i,n){
    cin>>te;

    if(te>yo1){
        yo1=te;
    }
    if(te<yo2){
        yo2=te;
    }
    v1.pb(te);
}
sort(v1.begin(),v1.end());
//cout<<yo1<<" "<<yo2<<endl;



    fo(i,n-1){
        //if(i==0){

                one1 = abs(v1[i]-v1[i+1])+1;
                two1 = abs(v1[i]+v1[i+1])-1;
                if(r<one1 || two1<l)continue;
                vf.pb(make_pair(one1,two1));
                if(one1<mi){
                    mi = one1;
                }
                if(two1>ma){
                    ma = two1;
                }
    //    }
    //    else{
    //            one2 = abs(v1[i]-v1[i+1])+1;
    //            two2 = abs(v1[i]+v1[i+1])-1;
    //            if(two1<=two2 && two1>=one2 && one1<one2){
    //                two1 = two2;
    //            }
    //            else if(two1<=two2 && two1>=one2 && one1>one2){
    //                two1 = two2;
    //                one1 = one2;
    //            }
    //            else{
    //                c += (min(r,two1) - max(l,one1)) + 1;
    //                one1 = one2;
    //                two1 = two2;
    //            }
    //
    //    }

    }

    sort(vf.begin(),vf.end());
    po1 = vf[0].first;
    po2 = vf[0].second;
    for(i=1;i<vf.size();i++){
        if(vf[i].first>po2){
            c += (min(r,po2) - max(l,po1)) + 1;
            po1 = vf[i].first;
            po2 = vf[i].second;
        }
        else{
            if(vf[i].second>po2){
                po2 = vf[i].second;
            }
        }
    }

    c += (min(r,po2) - max(l,po1)) + 1;
    if(c<0){
        cout<<0;
    }
    else{
        cout<<c;
    }


ret;
}
