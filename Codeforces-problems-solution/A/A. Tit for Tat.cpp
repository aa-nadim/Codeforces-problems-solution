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
            ll a[n];
            for(ll i=0;i<n;i++)cin>>a[i];

            ll i=0,j=n-1;
            while(i<j){
                if(k==0)break;
                if(a[i]>0){
                    a[i]=a[i]-1;a[j]=a[j]+1;k--;
                }
                else{
                    i++;
                }
            }
            for(ll i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
        }
return 0;
}

