#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
#define MX 9999999
v99 a[MX],b[MX],k=0;
void  dfs(v99 n){
    if(n>1)dfs(a[n]);
    cout<<n<<" ";
}
int main()
{
    v99 n;cin>>n;
    for(v99 i=2;i<=n;i++){
        cin>>a[i];
    }
    dfs(n);
}
