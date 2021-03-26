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
            string str;
            cin>>str;

                ll x,y;
                for(ll i=0;i<n;i++){
                    if(str[i]=='*'){
                        x=i;break;
                    }
                }str[x]='X';
                for(ll i=n-1;i>=0;i--){
                    if(str[i]=='*'){
                        y=i;break;
                    }
                }str[y]='X';

                ll i=x+k,j=x;
                while(1){
                    if(i==j || i>=y){
                        break;
                    }
                    if(str[i]=='*'){
                        str[i]='X';
                        j=i;
                        i=j+k;
                    }
                    i--;
                }
                ll cnt=0;
                for(ll i=0;i<n;i++){
                    if(str[i]=='X')cnt++;
                }
                cout<<cnt<<endl;

        }
return 0;
}

