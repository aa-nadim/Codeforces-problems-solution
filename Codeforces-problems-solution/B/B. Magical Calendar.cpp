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
        ll n,r;cin>>n>>r;
        ll c=0;
        if(n>r)cout<<r*(r+1)/2<<endl;
        else if(n==r) r--,cout<<r*(r+1)/2+1<<endl;
        else n--,cout<<n*(n+1)/2+1<<endl;
    }
    return 0;
}

