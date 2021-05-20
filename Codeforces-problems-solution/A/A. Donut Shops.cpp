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
    test{
            ll a,b,c;cin>>a>>b>>c;
            if(a>=c)cout<<-1<<" ";
            else cout<<1<<" ";

            if(a*b<=c)cout<<-1<<endl;
            else cout<<b<<endl;
    }return 0;
}

