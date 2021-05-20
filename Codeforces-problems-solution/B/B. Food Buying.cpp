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
        v99 s,sum,r,y,x;cin>>s;sum=s;
        while(s>9){
            y=s%100;x=y/10;  r=s%10;
            s/=10;
            sum+=s;
            s+=r;
        }
        cout<<sum<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///

