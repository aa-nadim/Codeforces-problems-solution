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
    //ll test;cin>>test;while(test--)
        {
            ll n;cin>>n;
            ll u[n],s[n],sum;
            vector<ll>v;
            vector<vector<ll> > vec;
            for(ll i=0;i<n;i++){
                cin>>u[i];
                v.push_back(u[i]);
            }
            sum=0;
            for(ll i=0;i<n;i++){
                cin>>s[i];
                vec[u[i]].push_back(s[i]);
            }
        }
return 0;
}
