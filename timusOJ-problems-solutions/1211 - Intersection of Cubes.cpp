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
        int n,v;cin>>n;
        int a,b,c,x,y,z;a=b=c=0;x=y=z=10000;
        while(n--){
            int arr[6];
            for(int i=0;i<6;i++)cin>>arr[i];
            a=max(a,arr[0]);
            b=max(b,arr[1]);
            c=max(c,arr[2]);

            x=min(x,arr[3]);
            y=min(y,arr[4]);
            z=min(z,arr[5]);
        }
        v=(x-a)*(y-b)*(z-c);
        cout<<"Case "<<k++<<": ";
        if(v<=0)cout<<0<<endl;
        else cout<<v<<endl;
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

