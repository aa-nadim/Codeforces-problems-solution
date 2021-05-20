#include<bits/stdc++.h>
using namespace std;
#define MX 99999
vector<int>g[MX];
map<int,int>l;  map<int,int>::iterator it;
int v[MX];
void bfs(int n){
    	queue<int>Q;
    	l[n]=1;
    	Q.push(n);
    while(!Q.empty()){
        int x=Q.front();Q.pop();v[x]=1;
        for(int i=0; i<g[x].size() ;i++){
            if(v[g[x][i]])continue;
            Q.push(g[x][i]);
            l[g[x][i]]=l[x]+1;
        }
    }
}
int main()
{
    int n;cin>>n;int arr[n+1];
    for(int i=1;i<=n;i++){
        int a;cin>>a;arr[i]=a;
        if(a==-1)continue;
        else{
            g[a].push_back(i);
            g[i].push_back(a);
        }
    }
    for(int i=1;i<=n;i++)   if(arr[i]==-1)bfs(i);
    int mx=0;   for(it=l.begin();it!=l.end();++it) mx=max(mx,it->second);
    cout<<mx<<endl; return 0;
}
