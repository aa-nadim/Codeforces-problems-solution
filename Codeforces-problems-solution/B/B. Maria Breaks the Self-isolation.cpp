#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    test{
        int n;cin>>n;
        int a[n],ans=1;
        for(int  i=0;i<n;i++){
            cin>>a[i];
        }sort(a,a+n);

            for(int i=n-1;i>=0;i--){
                if(i+1>=a[i]){
                    ans=i+2;break;
                }
            }
            cout<<ans<<endl;



        ///printf("Case %d: %lld\n",k++,v);
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

