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
            int n;
            cin>>n;
            int a[n];
            for(int i=1;i<=n;i++)cin>>a[i],mx[i]=max(mx[i-1],a[i]);
            int r=n;
            for(int i=n;i>=1;i--){
                if(mx[i]==a[i]){
                    for(int j=i;j<=r;j++)cout<<a[j]<<" ";
                    r=i-1;
                }
            }
            cout<<endl;

        }
return 0;
}
