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
    int a[5],s=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s%5==0 && s!=0) cout<<s/5<<endl;
    else cout<<-1<<endl;
    return 0;
}///...........Alhamdulillah.........///

