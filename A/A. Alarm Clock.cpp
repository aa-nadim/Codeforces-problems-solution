#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        v99 a,b,c,d;cin>>a>>b>>c>>d;
        if(a<=b) cout<<b<<endl;
        else{
            if(c-d<1) cout<<-1<<endl;
            else{
                v99 x=ceil((double)(a-b)/(c-d));
                cout<<b+x*c<<endl;
            }

        }
    }
    return 0;
}


