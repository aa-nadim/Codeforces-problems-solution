#include<bits/stdc++.h>
using namespace std;
int n,x[101],y[101],vis[101],ans=-1;
void dfs(int a){
    vis[a]=1;
    for(int i=1;i<=n;i++)if((x[i]==x[a] || y[i]==y[a]) && vis[i]==0)dfs(i);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>x[i]>>y[i];
    for(int i=1;i<=n;i++)if(vis[i]==0)dfs(i),ans++;
    cout<<ans<<endl;
}
