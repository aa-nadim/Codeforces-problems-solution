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
    v99 a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);

    if(a[0]+a[1]>a[2]) cout<<a[0]+a[1]+a[2]<<endl;
    else cout<<2*(a[0]+a[1])<<endl;
    return 0;
}///...........Alhamdulillah.........///

