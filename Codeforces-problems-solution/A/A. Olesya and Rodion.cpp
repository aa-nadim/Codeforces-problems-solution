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
    int n,t;cin>>n>>t;
    if(t==10 && n==1) cout<<-1<<endl;
    else{
        if(t==10) t=1;
        for(int i=1;i<n;i++)
            cout<<t;
        if(t==1) cout<<0;
        else cout<<t;
        cout<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///





