#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int s,ans;s=0;ans=0;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        s+=(b-a);
        ans=max(ans,s);
    }
    cout<<ans<<endl;
    return 0;
}

