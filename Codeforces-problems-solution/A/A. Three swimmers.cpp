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
            ll p,a,b,c;
            cin>>p>>a>>b>>c;
            ll x = p/a;
            ll y = p/b;
            ll z = p/c;
            if(x*a < p) x++;
            if(y*b < p) y++;
            if(z*c < p) z++;
            cout<<min((x*a)-p , min((y*b)-p , (z*c)-p))<<endl;
        }
return 0;
}

