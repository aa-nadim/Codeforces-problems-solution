#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
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
        ll a,b,n,m;cin>>a>>b>>n>>m;
        if(m>min(a,b)||a+b<n+m)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
    return 0;
}
