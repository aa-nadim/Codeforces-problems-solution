#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
const double pi=acos(-1.0);
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    test
    //while(1)
    {
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        vector<ll>v;
        ll n,k;cin>>n>>k;
        ll a[n];
        bool ok=true;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%k!=0)ok=false;
            if(a[i]%k)
            mp[a[i]%k]++;
        }
        if(ok)cout<<0<<endl;
        else{
            ll x,y,z;
            for(it=mp.begin();it!=mp.end();++it){
                y=k-it->first;
                z=it->second-1;
                //if(it->first==0)y=0;
                v.push_back(k*z+y);
            }
            //for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
            //if(ok)cout<<*max_element(v.begin(),v.end())<<endl;
             cout<<*max_element(v.begin(),v.end())+1<<endl;
        }

    }
    return 0;
}



