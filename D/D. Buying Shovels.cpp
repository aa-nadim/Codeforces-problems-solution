#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    v99 t,k=1;cin>>t;
    while(t--){
        v99 n,k;cin>>n>>k;
        v99 ans=n;
        for(v99 i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k)ans=min(ans,n/i);
                if(n/i<=k)ans=min(ans,i);
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11


