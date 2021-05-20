#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--){
    ll n,m,x,y;cin>>n>>m;
    x=max(n,m);
    y=min(n,m);
    if(x<3) cout<<"YES"<<endl;
    else if(y==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}

