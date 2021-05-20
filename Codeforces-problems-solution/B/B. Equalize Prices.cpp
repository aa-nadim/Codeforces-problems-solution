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
int main()
{
    test{
                ll n,k;cin>>n>>k;
                ll a[n];
                for(int i=0;i<n;i++)cin>>a[i];
                sort(a,a+n);
                if(a[0]+k<a[n-1]-k)cout<<-1<<endl;
                else cout<<a[0]+k<<endl;

    }return 0;
}

