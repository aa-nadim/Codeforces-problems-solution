#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

string s[128];int n,i;
int main()
{
    cin>>n;
    for(i=0; i<n; i++)cin>>s[i];
    sort(s,s+n);
    cout<<s[n/2];
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

