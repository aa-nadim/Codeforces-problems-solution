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
#define    REP(i,a,b)     for(int i = a; i <= b; i++)
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
#define    F              first
#define    S              second
#define    pb             push_back
#define    mp             make_pair
#define    pi             acos(-1)
#define    all(x)         x.begin(),x.end()
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {


            ll x,y;cin>>x>>y;
            string s;cin>>s;
            ll u,r,d,l;
            u=r=d=l=0;
            for(ll i=0;i<s.length();i++){
                if(s[i]=='U')u++;
                else if(s[i]=='R')r++;
                else if(s[i]=='D')d++;
                else l++;
            }
            bool ok=false;
            if((x>=0 && y>=0) && (u>=y && r>=x))ok=true;
            else if((x>=0 && y<0) && (d>=abs(y) && r>=x))ok=true;
            else if((x<0 && y>=0) && (u>=y && l>=abs(x)))ok=true;
            else if((x<0 && y<0) && (d>=abs(y) && l>=abs(x)))ok=true;

            if(ok)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
return 0;
}

