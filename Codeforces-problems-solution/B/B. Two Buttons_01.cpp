///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define mx 900000000
typedef long long v99;
using namespace std;
map<v99,v99>visit,level;
void bfs(v99 n,v99 m)
{
    queue<int>q;
    visit[n]=0;
    level[n]=0;
    q.push(n);
    while(!q.empty()){
        v99 x=q.front();
        q.pop();
        if(x>m){level[m]=-1;break;}
        if(x==m) break;
        if(visit[2*x]==0 && 2*x<mx){
            visit[2*x]++;
            level[2*x]=level[x]+1;
            q.push(2*x);
        }
        if(visit[3*x]==0 && 3*x<mx){
            visit[3*x]++;
            level[3*x]=level[x]+1;
            q.push(3*x);
        }
    }
}
int main()
{
    v99 n,m;cin>>n>>m;
    bfs(n,m);
    cout<<level[m]<<endl;
    return 0;
}
///...........Alhamdulillah.........///

