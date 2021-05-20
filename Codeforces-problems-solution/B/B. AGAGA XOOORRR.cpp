///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int

int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {

            ll n,k;cin>>n;
            ll a[n];
            set <ll>s;
            bool ok=false;
            for(ll i=0;i<n;i++){
                cin>>a[i];s.insert(a[i]);
            }
            if(s.size()==1)ok=true;
            else{
                s.clear();
                ll x=a[0],y=a[1];
                s.insert(x);
                for(ll i=1;i<n-1;i++){
                    for(ll j=i+1;j<n;j++){
                        y^=a[j];
                    }
                    if(x==y){
                        ok=true;break;
                    }
                    x^=a[i];y=a[i+1];
                }
            }

            //cout<<x<<" "<<y<<endl;
            if(ok)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
return 0;
}


