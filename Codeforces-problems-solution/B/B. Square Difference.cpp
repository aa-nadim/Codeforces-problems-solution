#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Test IOS long long t;cin >> t;while(t--)
using namespace std;
typedef long long v99;
int main()
{
    v99 i,a,b,p;
    Test
    {
        cin>>a>>b;
        for(p=1,i=2;i<sqrt(a+b)+1;i++)
            p&=(a+b)%i!=0;
        cout<<(a-b==1&&p?"YES":"NO")<<endl;
    }
}
