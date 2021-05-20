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

    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll e,odd,s=0;
    for(ll i=0;i<n;i++){
        e=odd=0;
        for(ll j=0;j<i;j++){
            if(j%2==0)e+=a[j];
            else odd+=a[j];
        }
        for(ll j=i+1;j<n;j++){
            if((j-1)%2==0)e+=a[j];
            else odd+=a[j];
        }
        if(e==odd)s++;
    }
    cout<<s<<endl;
}
