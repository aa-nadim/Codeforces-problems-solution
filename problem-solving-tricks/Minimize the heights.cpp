///...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering.......///
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
    //ll test;cin>>test;while(test--)
        {
                int n,k;cin>>n>>k;
                int a[n],i;
                for(i=0 ;i<n;i++){
                    cin>>a[i];
                }
                sort(a,a+n);
                int small=a[0]+k;
                int big=a[n-1]-k;
                if(small>big)swap(small,big);
                for(i=1;i<n-1;++i){
                    int sub=a[i]-k;
                    int add=a[i]+k;
                    if(sub>=small || add<=big)
                        continue;
                    else if(big-sub<=add-small)
                        small=sub;
                    else big=add;
                }
                cout<<min(big-small,a[n-1]-a[0])<<endl;
        }
return 0;
}

