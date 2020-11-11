#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        map<int ,int >mp;
        map<int ,int >::iterator it;
        int  n;cin>>n;
        int  a[n];
        for(int  i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int  s=0,y=0;
        for(it=mp.begin();it!=mp.end();++it){
            int  x=it->first;
            y+=it->second;
            s+=(y/x);
            y=y%x;
        }
        cout<<s<<endl;
    }
    return 0;
}

