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
        int n;cin>>n;
        int a[n+1];a[n]=2000;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int mi=20000,x;
        for(int i=0;i<n;i++){
            x=abs(a[i]-a[i+1]);
            mi=min(mi,x);
        }
        cout<<mi<<endl;
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

