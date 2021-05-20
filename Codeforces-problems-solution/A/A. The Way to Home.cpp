#include<bits/stdc++.h>
using namespace std;
#define MX 99999
vector<int>v,graph[MX];
bool vis[MX];
int dist[MX];
void bfs(int source){
    	queue < int > Q;
    	// initialization
    	vis[source] = 1;	dist[source] = 0;
    	Q.push(source);
    while(!Q.empty()){
        int node=Q.front();	Q.pop();
        for (int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];
            if(vis[next]==0){
                vis[next] = 1; // visit
                dist[next] = dist[node] + 1; // update
                Q.push(next); // push to queue
            }
        }
    }
}
int main(){
    int n,d;cin>>n>>d;int arr[n+1];
    for (int i = 1; i <=n ; i++){
        cin>>arr[i];
        if(arr[i]==1)v.push_back(i);
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(i+4<v[j]) break;
            else{
                g[i].push_back_
            }
        }
    }
    bfs(1);
    	cout << "From node " << source << endl;
    for (int i = 1; i <= nodes; i++)
        cout << "Distance of " << i << " is : " << dist[i] << endl;
    return 0;
}
