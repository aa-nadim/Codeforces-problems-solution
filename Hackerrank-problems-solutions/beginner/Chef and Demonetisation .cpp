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

    int t;cin>>t;
    while(t--)
    {
        ll s,n;cin>>s>>n;cout<<s/n+(s%n)/2+(s%n)%2<<endl;
    }
    return 0;
}

