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
    v99 n,m;cin>>n>>m;
    v99 c,s=0;
    if(m%n==0){
        c=m/n;
        while(1<c){
            if(c%3==0) c/=3;
            else if(c%2==0)c/=2;
            else {
                cout<<-1<<endl;return 0;
            }
            s++;
        }
        cout<<s<<endl;
    }
    else cout<<-1<<endl;
    return 0;
}///...........Alhamdulillah.........///




