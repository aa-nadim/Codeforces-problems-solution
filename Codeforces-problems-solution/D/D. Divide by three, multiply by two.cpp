///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
v99 n;
map<v99,v99>mp;
vector<v99>v;
bool bfs(v99 num)
{
    queue<v99>q;v.clear();
    q.push(num);
    while(!q.empty()){
        v99 x=q.front();q.pop();v.push_back(x);
        if(x%3==0){
            if(mp[x/3])q.push(x/3);
        }
        if(mp[x*2])q.push(x*2);
        if(v.size()==n)return true;
    }
    return false;
}
int main()
{
    cin>>n;v99 a[n],i;
    for(i=0;i<n;i++)cin>>a[i],mp[a[i]]++;
    for(i=0;i<n;i++){if(bfs(a[i]))break;}
    for(i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;;

    return 0;
}

