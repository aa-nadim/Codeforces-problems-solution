#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
const double pi=acos(-1.0);
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    test
    //while(1)
    {
        ll x,y,n,a,b;cin>>x>>y>>n;
        a=n/x;b=(x*a)+y;
        if(b>n) cout<<x*(a-1)+y<<endl;
        else cout<<b<<endl;
    }
    return 0;
}

