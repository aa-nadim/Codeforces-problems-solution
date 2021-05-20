#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    int t,k=1;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        int mx=max(a,b);
        int mi=min(a,b);
        if(mx==mi) cout<<(a+b)*(a+b)<<endl;
        else if(2*mi>mx) cout<<4*mi*mi<<endl;
        else cout<<mx*mx<<endl;
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

