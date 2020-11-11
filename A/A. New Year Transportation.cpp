#include<bits/stdc++.h>
using namespace std;
#define MX 100000
vector<int >graph[MX];
void printGraph(vector<int>graph[],int n){
    cout<<"The graph is:"<<endl;
    for(int i=1;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<graph[i].size();j++){
            cout<<graph[i][j]<<' ';
        }
        cout<<endl;
    }
}
bool visit[MX];
void dfs(int node){
    visit[node]=1;
    for(int i=0;i<graph[node].size();i++){
        int next=graph[node][i];
        if(visit[next]==0)
            dfs(next);
    }
}
int main()
{
    int n,t;cin>>n>>t;
    for(int i=1;i<n;i++){
        int a;cin>>a;
        graph[i].push_back(i+a);
    }
    printGraph(graph,n);
    dfs(1);
    if(visit[t]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
