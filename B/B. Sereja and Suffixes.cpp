#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        int n,m;cin>>n>>m;
        int a[n+1],l[m+1],b[m+1];
        map<int,int>mp,ans;
        set<int>s;
        set<int>::iterator it;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=m;i++)cin>>l[i],s.insert(l[i]);
        int c[s.size()+1],k=1;
        for(it=s.begin();it!=s.end();it++)c[k++]=*it;

        for(int i=n,j=s.size();j>0;i--){
            mp[a[i]]++;
            if(i==c[j])ans[c[j]]=mp.size(),j--;
        }
        for(int i=1;i<=m;i++)cout<<ans[l[i]]<<endl;
    }
    return 0;
}

