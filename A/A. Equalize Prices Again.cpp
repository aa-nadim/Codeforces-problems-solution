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
        int  n;cin>>n;
        int  a[n],s=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s+=a[i];
        }
        if(s%n==0) cout<<s/n<<endl;
        else cout<<s/n+1<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///

