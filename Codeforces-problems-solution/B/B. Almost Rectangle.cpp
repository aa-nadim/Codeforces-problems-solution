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
            string str[n],s;
            ll a,b,x,y;
            for(ll i=0;i<n;i++){
                cin>>str[i];
                s=str[i];
                for(ll j=0;j<n;j++){
                    if(s[j]=='*'){
                        x=i;y=j;
                    }
                }
            }
            bool ok=false;
            for(ll i=0;i<n;i++){
                s=str[i];
                for(ll j=0;j<n;j++){
                    if(s[j]=='*'){
                        a=i;b=j;ok=true;break;
                    }
                }
                if(ok)break;
            }

            ll temp=0,temp2=0;
            if(a<n-1)temp=n-1;
            if(b<n-1)temp2=n-1;
            if(a==x){
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<n;j++){
                        if(i==temp && (j==b || j==y)){
                            //str[i][j]='*';
                            cout<<"*";
                        }
                        else{
                            cout<<str[i][j];
                        }
                    }cout<<endl;
                }
            }
            else if(b==y){
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<n;j++){
                        if((i==a || i==x) && j==temp2){
                            //str[i][j]='*';
                            cout<<"*";
                        }else{
                            cout<<str[i][j];
                        }
                    }cout<<endl;
                }
            }
            else{
                for(ll i=0;i<n;i++){
                    for(ll j=0;j<n;j++){
                        if((i==a && j==y) || (i==x && j==b)){
                            //str[i][j]='*';
                            cout<<"*";
                        }else{
                            cout<<str[i][j];
                        }
                    }cout<<endl;
                }
            }
        }
return 0;
}
