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
    test
    {
        v99 n;cin>>n;
        v99 x,y,a=0;
        while(n>1){
            if(n<2) break;
            a++;
            x=y=2;
            while(x<=n){
                y+=3;
                x+=y;
            }
            n-=(x-y);
        }
        cout<<a<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///

