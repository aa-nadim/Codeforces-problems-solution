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
    v99 n,x,c=0;cin>>n>>x;
    for(v99 i=1;i<=n;i++){
        if(x%i==0 && n*i>=x) c++;
    }
    cout<<c<<endl;
    return 0;
}///...........Alhamdulillah.........///

