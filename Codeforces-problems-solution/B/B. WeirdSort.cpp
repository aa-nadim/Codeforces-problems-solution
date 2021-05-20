#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        vector<int>a(n);
        vector<int>v;
        int p[m];
        for(int i=0;i<n;i++){
            cin>>a[i];v.push_back(a[i]);
        }
        for(int i=0;i<m;i++){cin>>p[i];p[i]--;}sort(p,p+m);
        sort(v.begin(),v.end());
        //for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
        while(1){
            bool ok=false;
            for(int i=0;i<m;i++){
                if(a[p[i]]>a[p[i]+1]){
                    swap(a[p[i]],a[p[i]+1]);ok=true;
                }
            }
            if(!ok)break;
        }
        //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
        if(a==v)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
