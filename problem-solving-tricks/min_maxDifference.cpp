///...............................GarbageValue..........................///
#include<bits/stdc++.h>
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
            int n,k;cin>>k>>n;
            int arr[n];
            for(int i=0;i<n;i++)cin>>arr[i];
            sort(arr,arr+n);
            arr[0]=arr[0]+k;
            arr[n-1]=arr[n-1]-k;

            cout<<arr[n-1]-arr[0]<<endl;

        }
return 0;
}
