#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;
map<int,int>mp;
int main()
{

#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
    test{
            ll n,a,b,m;cin>>n>>a>>b;
            if(n%2)n--,m=1;
            else m=0;
            if(2*a>b)cout<<(n*b)/2+m*a<<endl;
            else cout<<(n+m)*a<<endl;


    }return 0;
}

