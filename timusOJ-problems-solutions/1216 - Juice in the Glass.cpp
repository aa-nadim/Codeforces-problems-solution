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
        double r1,r2,h,p;cin>>r1>>r2>>h>>p;
        double R=r2+(r1-r2)*p/h;
        double v=pi*p*(R*R+R*r2+r2*r2)/3.0;

        printf("Case %d: %lf\n",k++,v);

    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

