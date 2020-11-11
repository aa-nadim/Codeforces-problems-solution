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
    int x,y,z;cin>>x>>y>>z;
    double a,b,c;
    b=sqrt((double)x*y/z);
    a=(double)x/b;
    c=(double)y/b;
    cout<<4*(a+b+c)<<endl;
    return 0;
}


