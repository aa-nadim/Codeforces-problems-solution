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

            ll a,b,c;cin>>a>>b>>c;
            //ll GCD=gcd(a,b);        cout<<GCD<<endl;
            ll mx,mi;
            bool ok=true;
            if(a<=b){
                mi=a;mx=b;
            }else{
                mi=b;mx=a;ok=false;
            }
            string s1,s2;
            if(a==b && b==c){
                s1+='1';
                for(ll i=1;i<a;i++){
                    s1+='0';
                }
                s2+='2';
                for(ll i=1;i<a;i++){
                    s2+='0';
                }
            }
            else{
                s1+='1';
                for(ll i=1;i<mi;i++){
                    s1+='0';
                }
                s2+='1';
                for(ll i=1;i<mx;i++){
                    if(i==mx-c){
                        s2+='1';
                    }
                    else{
                       s2+='0';
                    }
                }
            }
            if(ok)cout<<s1<<" "<<s2<<endl;
            else cout<<s2<<" "<<s1<<endl;
        }
return 0;
}

