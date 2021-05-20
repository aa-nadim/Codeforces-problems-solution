#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
#define MX 999999
int main()
{
    map<v99,v99>mp;
    vector<v99>v[MX];
    v99 n;cin>>n;
    for(v99 i=1;i<=n;i++){
        v99 x;cin>>x;
        v[x].push_back(i);
        mp[x]++;
    }
    vector<pair<int,int>>pi;
    for(auto it=mp.begin();it!=mp.end();++it){
        bool flag=false;
        v99 i=it->first;
        if(v[i].size()==1)pi.push_back(make_pair(i,0));
        else if(v[i].size()>1){
            v99 dif=v[i][1]-v[i][0];
            for(v99 j=1;j<v[i].size();j++){
                if(dif!=(v[i][j]-v[i][j-1])){
                        flag=true;break;
                }
            }
            if(!flag)pi.push_back(make_pair(i,dif));
        }
    }
    cout<<pi.size()<<endl;
    for(v99 i=0;i<pi.size();i++)cout<<pi[i].first<<" "<<pi[i].second<<endl;
    return 0;
}
