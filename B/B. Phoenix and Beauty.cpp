///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        int n,k;cin>>n>>k;
        set<int>s;
        set<int>::iterator it;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            s.insert(x);
        }
        if(s.size()>k) cout<<-1<<endl;
        else{
            cout<<n*k<<endl;
            for(int i=0;i<n;i++){
                for(it=s.begin();it!=s.end();++it)
                    cout<<*it<<" ";
                for(int j=0;j<k-s.size();j++)
                    cout<<1<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}///...........Alhamdulillah.........///

