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
    map<string,int>mp;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        mp[s]++;
        if(mp[s]==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///

