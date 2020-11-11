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
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++) cin>>a[i]; sort(a,a+n);
    int m;cin>>m;int b[m];
    for(int i=0;i<m;i++) cin>>b[i]; sort(b,b+m);
    int count=0,x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x=abs(a[i]-b[j]);
            if(x==0){
                count++;
                b[j]=-1;break;
            }
            if(x==1){
                count++;
                b[j]=-1;break;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
///...........Alhamdulillah.........///






