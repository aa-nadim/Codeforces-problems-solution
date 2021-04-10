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
    //ll test;cin>>test;while(test--)
        {
            ll one,zero;cin>>one>>zero;
            ll a=0,b=0;
            string s;cin>>s;
            ll n=s.length();
            for(ll i=0;i<n;i++){
                if(s[i]=='0')a++;
                else if(s[i]=='1')b++;
            }
            zero=zero-a;one=one-b;
            ll i=0,j=n-1;
            bool OK=true;
            while(1){
                bool ok=true;
                if(i == j)break;
                else if(s[i]!=s[j] && ((s[i]=='1' && s[j]=='0')|| (s[i]=='0' && s[j]=='1'))){
                    OK=false;break;
                }
                else if(s[i]==s[j])




                else if(s[i]!=s[j] && (s[i]=='?' || s[j]=='?')){
                    if(s[i]=='0' && zero==0){
                        ok=false;break;
                    }
                    else if(s[i]=='0' && zero>0){
                        s[j]='0';i++;j--;zero--;
                    }
                    else if(s[i]=='1' && one==0){
                        ok=false;break;
                    }
                    else if(s[i]=='1' && one>0){
                        s[j]='1';i++;j--;one--;
                    }

                    else if(s[j]=='0' && zero==0){
                        ok=false;break;
                    }
                    else if(s[i]=='0' && zero>0){
                        s[j]='0';i++;j--;zero--;
                    }
                    else if(s[i]=='1' && one==0){
                        ok=false;break;
                    }
                    else if(s[j]=='1' && one>0){
                        s[i]='1';i++;j--;one--;
                    }
                }
                if(ok){
                    OK=false;break;
                }
            }
        }
return 0;
}

