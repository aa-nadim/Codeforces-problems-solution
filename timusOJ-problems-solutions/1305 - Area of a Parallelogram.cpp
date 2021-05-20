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
        int ax,ay,bx,by,cx,cy,dx,dy;cin>>ax>>ay>>bx>>by>>cx>>cy;
        dx=ax+cx-bx;
        dy=ay+cy-by;
        int ans1=ax*by+bx*cy+cx*dy+dx*ay;
        int ans2=bx*ay+cx*by+dx*cy+ax*dy;
        int s=abs(ans1-ans2)/2;
        printf("Case %d: %d %d %d\n",k++,dx,dy,s);
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11


