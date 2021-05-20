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
    v99 a,b,c;cin>>a>>b>>c;
    if(abs(a-b)==0) cout<<2*c+2*a<<endl;
    else cout<<2*c+2*min(a,b)+1<<endl;
    return 0;
}///...........Alhamdulillah.........///

