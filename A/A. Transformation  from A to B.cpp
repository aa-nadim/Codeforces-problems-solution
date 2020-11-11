#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
map<v99,v99>mp;
bool bfs(v99 a,v99 b){
    queue<v99>q;    q.push(a);      mp[a]=1;
    while(!q.empty()){
        v99 x=q.front();    q.pop();
        if(x==b)return true;

        if(2*x<=b && mp[2*x]==0){
            q.push(2*x);    mp[2*x]=x;
        }
        if((10*x+1)<=b && mp[(10*x+1)]==0){
            q.push(10*x+1);     mp[(10*x+1)]=x;
        }
    }return false;
}
int main()
{
        v99 a,b;cin>>a>>b;
        if(bfs(a,b)){
            vector<v99>v;   v99 i=b;
            while(i!=a){
                v.push_back(i);     i=mp[i];
            }v.push_back(i);
            reverse(v.begin(),v.end());
            cout<<"YES\n"<<v.size()<<endl;
            for(auto j:v)cout<<j<<' ';cout<<endl;
        }
        else cout<<"NO"<<endl;
    return 0;
}
