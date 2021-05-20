
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;
int main()
{
    v99 n,m;cin>>n>>m;
    v99 a[m];
    for(v99 i=0;i<m;i++){
        cin>>a[i];
    }
    v99 t=0;
    for(v99 i=0;i<m-1;i++){
        if(a[i]>a[i+1]) t+=n;
    }
    t+=a[m-1];
    cout<<t-1<<endl;
    return 0;
}




