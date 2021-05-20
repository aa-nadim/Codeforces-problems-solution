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

            ll m,n,k;cin>>m>>n>>k;
            ll x,y;
            x=m;y=n;
            ll mi=min((x-1+x*(y-1)),(y-1+y*(x-1)));

            //cout<<mi<<endl;
             if(mi==k){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
return 0;
}
