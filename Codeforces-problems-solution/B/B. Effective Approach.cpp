#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    map<int,int>mp;
    v99 n,m;cin>>n;
    v99 a[n+1];
    for(v99 i=1;i<=n;i++){
        cin>>a[i];mp[a[i]]=i;
    }
    cin>>m;
    v99 x,v,p;v=p=0;
    for(v99 i=1;i<=m;i++){
        cin>>x;
        v+=mp[x];
        p+=(n+1-mp[x]);
    }
    cout<<v<<" "<<p<<endl;
    return 0;
}

