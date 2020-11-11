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
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int i=2,count=0;
    while(i<n){
        if(a[i]+k<6) count++;
        i+=3;
    }
    cout<<count<<endl;
    return 0;
}


///...........Alhamdulillah.........///





