///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int n;cin>>n;
    int q,m,a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>q;
    while(q--) {
        cin>>m;
        cout<<upper_bound(a,a+n,m)-a<<endl;
    }
    return 0;
}
///...........Alhamdulillah.........///





