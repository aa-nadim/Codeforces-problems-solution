 #include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999


map<int,int>::iterator it;

int main()
{
    int t;cin>>t;while(t--){
        vector<int>v;
        map<int,int>mp;
        int n;cin>>n;int a[n],b[n],k=0;
        bool ok=false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]>2) ok=true;
            if(mp[a[i]]>1)v.push_back(i);
        }
        //for(int i=0;i<v.size();i++) cout<<v[i]<<' ';cout<<endl;
        if(ok){
            cout<<"YES"<<endl;continue;
        }
        else{ok=false;
            for(int j=0;j<v.size();j++){
                if(a[v[j]-1]!=a[v[j]]){
                    cout<<"YES"<<endl;ok=true;
                    break;
                }
            }
            if(!ok)cout<<"NO"<<endl;continue;
        }

    }
    return 0;
}


