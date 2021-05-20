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
    v99 a,x,b,c;cin>>a>>x>>b>>c;
    v99 t=min(a,min(b,c));

    if(t<a) cout<<t*256+min(a-t,x)*32<<endl;
    else cout<<t*256<<endl;
    return 0;
}///...........Alhamdulillah.........///

