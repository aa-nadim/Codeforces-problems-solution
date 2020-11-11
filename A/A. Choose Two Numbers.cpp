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
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int x=*max_element(a,a+n);
    int m;cin>>m;int b[m];
    for(int i=0;i<m;i++)cin>>b[i];
    int y=*max_element(b,b+m);
    cout<<x<<" "<<y<<endl;
    return 0;
}///...........Alhamdulillah.........///

