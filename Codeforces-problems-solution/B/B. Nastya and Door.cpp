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
    test
    {
        v99 n,k;cin>>n>>k;
        v99 a[n+2],p,b[n+1];a[0]=a[n+1]=2000000000;
        for(int i=1;i<=n;i++) cin>>a[i];

        for(int i=1,k=1;i<=n;i++)
            if(a[i-1]<a[i] && a[i]>a[i+1]) b[k++]=o++;
            else b[k++]=-1;
        int l=1;
        for(int i=k-l+1,l=1;i<=n;i++,l++){
            if(b[i]!=-1){
                t=o-1;
            }
        }
        cout<<t+1<<" "<<l<<endl;
    }
    return 0;
}
///...........Alhamdulillah.........///





