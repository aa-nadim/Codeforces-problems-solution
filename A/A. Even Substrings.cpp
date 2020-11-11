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
    int n,x=0;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if((s[i]-'0')%2==0) x+=(i+1);
    }
    cout<<x<<endl;
    return 0;
}///...........Alhamdulillah.........///

