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
            ll odd=0;ll even=0;
            for(ll i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0)even++;
                else odd++;
            }
            if(even>=odd){
                for(ll i=0;i<n;i++){
                    if(a[i]%2==0)cout<<a[i]<<" ";
                }
                for(ll i=0;i<n;i++){
                    if(a[i]%2==1)cout<<a[i]<<" ";
                }
            }else{
                for(ll i=0;i<n;i++){
                    if(a[i]%2==1)cout<<a[i]<<" ";
                }
                for(ll i=0;i<n;i++){
                    if(a[i]%2==0)cout<<a[i]<<" ";
                }
            }cout<<endl;


        }
return 0;
}

