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
            ll a[n],b[n];
            for(ll i=0;i<n;i++){
                cin>>a[i];
                b[i]=a[i];
            }
            sort(a,a+n);
            ll x;
            for(ll i=0;i<n-1;i++){
                if(a[0] != a[1]){
                    x=a[0];break;
                }
                else{
                    x=a[n-1];break;
                }
            }
            for(ll i=0;i<n;i++){
                if(b[i]==x){
                    cout<<i+1<<endl;break;
                }
            }


        }
return 0;
}

