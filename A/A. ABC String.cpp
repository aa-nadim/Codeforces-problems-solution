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
            string s;cin>>s;
            ll n=s.length();
            ll a=0,b=0,c=0;
            for(ll i=0;i<n;i++){
                if(s[i]=='A')a++;
                else if(s[i]=='B')b++;
                else c++;
            }
            if(a>b && a>c){
                for(ll i=0;i<n;i++){
                    if(s[i]!='A')s[i]='B';
                }
            }
            else if(b>a && b>c){
                for(ll i=0;i<n;i++){
                    if(s[i]!='B')s[i]='A';
                }
            }
            else{
                for(ll i=0;i<n;i++){
                    if(s[i]!='C')s[i]='A';
                }
            }
            char ch=s[0];
            ll cnt=0;
            bool ok=true;
            for(ll i=0;i<n;i++){
                if(s[i]==ch)cnt++;
                else cnt--;
                if(cnt<0){
                    ok=false;break;
                }
            }

            if(cnt==0 && ok==true)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
return 0;
}

