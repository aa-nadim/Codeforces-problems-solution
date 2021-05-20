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
            string s;cin>>s;
            ll t=0,m=0,cnt=0,cnt2=0;
            bool ok=true;
            for(ll i=0;i<n;i++){
                if(s[i]=='T'){
                    cnt++;t++;
                }
                else{
                    cnt--;m++;
                }
                if(cnt<0){
                    ok=false;
                    break;
                }
            }
            if(ok && s[0]=='T' && s[n-1]=='T' && t==2*m)cout<<"YES"<<endl;

            else cout<<"NO"<<endl;


        }
return 0;
}

