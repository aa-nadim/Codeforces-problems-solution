#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
#define MX 9999999999
int main()
{
    v99 t;cin>>t;
    while(t--){
        v99 n,x,m;cin>>n>>x>>m;

        v99 l,r;
        v99 a,b;

        bool flag=false;
        a=b=x;
        while(m--){
            cin>>l>>r;
            if((l<=a && a<=r) || (l<=b && b<=r)){
                b=max(b,r);a=min(a,l);
                //cout<<a<<" "<<b<<endl;
            }
        }
        cout<<b-a+1<<endl;
    }
}
