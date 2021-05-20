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
        int a,b,c,d;cin>>a>>b;cin>>c>>d;
        int p,q,r,s;
        p=max(a,b);r=min(a,b);

        q=max(c,d);s=min(c,d);


        if(((r+s)==p && q==p)||(p+r)==(q+s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    return 0;
}



