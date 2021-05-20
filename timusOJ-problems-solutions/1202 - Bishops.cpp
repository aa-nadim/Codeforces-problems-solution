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
        int r1,c1,r2,c2;cin>>r1>>c1>>r2>>c2;
        int p,q,x,y;
        p=abs(r1-c1);q=abs(r2-c2);
        x=abs(r1-r2);y=abs(c1-c2);
        if(p%2==q%2){
            if(x==y)cout<<"Case "<<k++<<": "<<1<<endl;
            else cout<<"Case "<<k++<<": "<<2<<endl;
        }
        else cout<<"Case "<<k++<<": impossible"<<endl;
    }
    return 0;
}


