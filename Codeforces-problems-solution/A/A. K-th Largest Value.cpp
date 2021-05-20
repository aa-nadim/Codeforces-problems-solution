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

            ll n,q;cin>>n>>q;
            ll a[n],one=0;
            for(ll i=0;i<n;i++){
                cin>>a[i];
                if(a[i]==1)one++;
            }
            ll t;
            for(ll i=0;i<q;i++){
                cin>>t;
                if(t==2){
                    ll k;cin>>k;
                    if(k<=one)cout<<1<<endl;
                    else cout<<0<<endl;
                }
                else{
                    ll x;cin>>x;
                    if(a[x-1]==1)one--;
                    else one++;
                }
            }
        }
return 0;
}
