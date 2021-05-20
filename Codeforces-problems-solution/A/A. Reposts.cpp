#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;cin>>n;
        string a,b,c;
        map<string,int>mp;
        mp["polycarp"]=1;
        int ans=1;
        while(n--){
            cin>>a>>b>>c;
            for(int i=0;i<a.length();i++)   a[i]=tolower(a[i]);
            for(int i=0;i<c.length();i++)   c[i]=tolower(c[i]);
            int e=mp[c]+1;

            if(e>ans)ans=e;

            mp[a]=e;
        }
        cout<<ans<<endl;
}

