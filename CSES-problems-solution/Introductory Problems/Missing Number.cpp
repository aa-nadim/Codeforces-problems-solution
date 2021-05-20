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
            ll p=n-1;
            ll a[p],x=n;
            for(ll i=0;i<p;i++)cin>>a[i];
            sort(a,a+p);
            for(ll i=0;i<p;i++){
                if(a[i] != i+1){
                    x=i+1;break;
                }
            }
            cout<<x<<endl;

        }
return 0;
}

