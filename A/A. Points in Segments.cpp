#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
const double pi=acos(-1.0);
int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif

    //test
    //while(1)
    {
        int n,m;cin>>n>>m;
        vector<int>v,vv;
        for(int i=0;i<n;i++){
            int a,b;cin>>a>>b;
            v.push_back(a);
            v.push_back(b);
        }
        for(int i=1;i<=m;i++){
            bool ok=true;
            for(int j=0;j<v.size();j+=2){
                if(v[j]<=i && i<=v[j+1]){
                    ok=false;break;
                }
            }
            if(ok)vv.push_back(i);
        }
        cout<<vv.size()<<endl;
        for(int i=0;i<vv.size();i++)cout<<vv[i]<<" ";cout<<endl;
    }
    return 0;
}

