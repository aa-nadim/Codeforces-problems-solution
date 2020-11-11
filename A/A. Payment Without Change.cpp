///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        v99 a,b,n,s,x,r;cin>>a>>b>>n>>s;
        x=s/n;r=s%n;
        if(a*n<s && a*n+b>=s ) cout<<"YES"<<endl;
        else if(x<=a && r<=b) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
    return 0;
}///...........Alhamdulillah.........///

