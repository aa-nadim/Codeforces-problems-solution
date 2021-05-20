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

            ll n;cin>>n;
            ll a[n];
            map<ll,ll>mp;
            map<ll,ll>::iterator it;
            for (ll i=0;i<n;i++){
                cin>>a[i];
                mp[a[i]]++;
            }
            for(it = mp.begin(); it!= mp.end(); ++it){
                cout<<it->first<<' ';
            }
            for(it = mp.begin(); it!= mp.end(); ++it){
                if(it->second > 1){
                    for(ll i=1;i<it->second;i++){
                        cout<<it->first<<' ';
                    }
                }
            }
            cout<<endl;




        }
return 0;
}

