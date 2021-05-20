#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test
    {
        string s;cin>>s;s=' '+s;
        map<char,v99>mp;
        map<char,v99>::iterator it;
        v99 ans=LLONG_MAX;
        for(v99 i=1;i<s.size();i++)
        {
            mp[s[i]]=i;
            if(mp.size()==3)
            {
                v99 h=0,m=LLONG_MAX;
                for(it=mp.begin();it!=mp.end();++it)
                {
                    h=max(h,it->second);
                    m=min(m,it->second);
                }
                ans=min(ans,(h-m+1));

            }
        }
        if(ans==LLONG_MAX)cout<<0<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
