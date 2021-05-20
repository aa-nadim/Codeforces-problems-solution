#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
int main()
{
    int t,k=1;cin>>t;
    while(t--){
        v99 x,y;
        v99 a,b;cin>>a>>b;
        x=(b/3)*2;
        if(b%3==2)x++;
        y=((a-1)/3)*2;
        if((a-1)%3==2)y++;
        cout<<"Case "<<k++<<": "<<x-y<<endl;
    }
    return 0;
}


