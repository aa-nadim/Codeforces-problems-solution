#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while(q--){
        ll a,b,x,y;cin>>a>>b;
        x=max(a,b);
        y=min(a,b);

        if(2*y<=x)cout<<y<<endl;
        else cout<<(x+y)/3<<endl;
    }
}
