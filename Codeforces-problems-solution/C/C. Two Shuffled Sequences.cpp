#include<bits/stdc++.h>
using namespace std;
int main(){
    {
        map<int,int>mp;
        map<int,int>::iterator it;
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)mp[a[i]]++;
        bool ok=true;
        for(it=mp.begin();it!=mp.end();++it){
            if(it->second>2){
                ok=false;break;
            }
        }

        if(!ok)cout<<"NO"<<endl;
        else{
            if(mp.size()==n){
                cout<<"YES"<<endl;
                cout<<0<<endl<<endl;
                cout<<n<<endl;
                for(int i=n-1;i>=0;i--)cout<<a[i]<<" ";cout<<endl;
            }
            else{
                cout<<n-int(mp.size())<<endl;
                for(int i=0;i<n-1;i++){
                    if(a[i]==a[i+1])cout<<a[i+1]<<" ";
                }
                cout<<endl<<mp.size()<<endl;
                for(int i=n-1;i>0;i--)if(a[i]!=a[i-1])cout<<a[i]<<" ";
                if(a[0]!=a[1])cout<<a[0];
                cout<<endl;
            }
        }
    }
    return 0;
}

