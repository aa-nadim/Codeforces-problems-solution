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
    int n,a,b;cin>>n;
    string str;cin>>str;
    a=b=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1') a++;
        else b++;
    }
    cout<<abs(a-b)<<endl;
    return 0;
}///...........Alhamdulillah.........///

