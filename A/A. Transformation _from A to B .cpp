#include<bits/stdc++.h>
#define mx 1000000000
typedef long long v99;
using namespace std;
map<v99,v99>visit,level;
vector<v99>v;
void dfs(v99 n,v99 m)
{
        if(x==m){
            v.push_back(m);
            break;
        }
        if(visit[10*x+1]==0 && 10*x+1<=m){
            visit[10*x+1]++;
            level[10*x+1]=level[x]+1;
            S.push(10*x+1);
        }
        if(visit[2*x]==0 && 2*x<=m){
            visit[2*x]++;
            level[2*x]=level[x]+1;
            S.push(2*x);
        }
        if(x>m){
            flag=false;break;
        }
    }
}
int main()
{
    v99 n,m;cin>>n>>m;
    dfs(n,m);
    cout<<"NO"<<endl;
    return 0;
}
///...........Alhamdulillah.........///
