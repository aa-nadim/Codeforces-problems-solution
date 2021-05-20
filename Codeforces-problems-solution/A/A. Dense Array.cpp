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
            for(ll i=0;i<n;i++){
                cin>>a[i];
            }
            ll c=0;

            for(ll i=0;i<n-1;i++){
                ll mx=max(a[i+1],a[i]);
                ll mi=min(a[i+1],a[i]);
                if(ceil((double)mx/mi)>2){
                    ll x=mx;
                    while(1){
                        if(x<mi || x==mi){
                            c--;
                            break;
                        }
                        else{
                            x=ceil((double)x/2);//cout<<x<< " ";
                            c++;
                        }
                    }
                }
            }
            cout<<c<<endl;

        }
return 0;
}

