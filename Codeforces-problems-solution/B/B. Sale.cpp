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
    int m,n;cin>>m>>n;
    int a[m],s,c;s=c=0;
    for(int i=0;i<m;i++) cin>>a[i];
    sort(a,a+m);
    for(int i=0;i<n;i++)
        if(a[i]<0) s+=a[i];
    cout<<abs(s)<<endl;
    return 0;
}///...........Alhamdulillah.........///





