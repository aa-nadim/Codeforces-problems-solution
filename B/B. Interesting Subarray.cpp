#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    test{
        v99 b,c,n;cin>>n;
        v99 a[n+1];a[n]=-900000000;
        for(v99 i=0;i<n;i++) cin>>a[i];
        v99 x=*max_element(a,a+n);
        v99 y=*min_element(a,a+n);
        if(x-y>=n){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(abs(a[i]-a[i+1])>=n){
                    b=i+1;c=i+2;break;
                }

            }
            cout<<b<<" "<<c<<endl;
        }
        else cout<<"NO"<<endl;

        ///printf("Case %d: %lld\n",k++,v);
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

