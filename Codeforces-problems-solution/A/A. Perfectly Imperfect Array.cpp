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

bool isPerfectSquare(long double x){
    if (x >= 0) {
        ll sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {

            ll n;cin>>n;
            ll a[n];
            bool ok=true;
            for(ll i=0;i<n;i++){
                cin>>a[i];
            }
            for(ll i=0;i<n;i++){
                if (!isPerfectSquare(a[i])){
                    ok=false;break;
                }
            }
            if(ok)
                cout << "NO"<<endl;
            else
                cout << "YES"<<endl;

        }
return 0;
}
