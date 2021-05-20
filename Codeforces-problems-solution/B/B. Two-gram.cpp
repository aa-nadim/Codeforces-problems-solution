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
    map<string,int>::iterator it;

    int n;string str;cin>>n>>str;
    string s="",b;
    for(int i=0;i<n-1;i++){
        s=s+str[i]+str[i+1];                          ///cout<<s<<endl;
        mp[s]++;
        s.clear();
    }
    int mx=0;
    for(it = mp.begin();it != mp.end();++it)
    {
        int x=it->second;
        if(mx<x)
        {
            mx=x;
            b=it->first;
        }
    }
    cout<<b<<endl;
    return 0;
}///...........Alhamdulillah.........///

