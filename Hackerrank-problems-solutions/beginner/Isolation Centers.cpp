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
        map<char,v99>mp;
        map<char,v99>::iterator it;
        v99 n,q;cin>>n>>q;
        string s;cin>>s;
        for(v99 i=0;i<n;i++) mp[s[i]]++;

        v99 arr[q];
        for(v99 i=0;i<q;i++){
            v99 a,sum=0;cin>>a;
            for(it=mp.begin();it!=mp.end();++it){
                v99 x=it->second;
                if(a<x){
                    sum+=(x-a);
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}///...........Alhamdulillah.........///

