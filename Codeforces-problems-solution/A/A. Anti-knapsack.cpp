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
            ll n,k;cin>>n>>k;
            ll cnt=n-k;
            bool ok=true;
            for(ll i=1;i<k;i++){
                ll x=k-i;
                if(2*x>k)cnt++;
                else if(2*x==k && ok==true){
                    cnt++;ok=false;
                }
                else break;
            }
            bool OK=true;
            cout<<cnt<<endl;
            for(ll i=n;i>k;i--)cout<<i<<" ";
            for(ll i=1;i<k;i++){
                ll x=k-i;
                if(2*x>k){
                    cout<<x<<" ";
                }
                else if(2*x==k && OK==true){
                    cout<<x<<" ";OK=false;
                }
                else break;
            }cout<<endl;
        }
return 0;
}

