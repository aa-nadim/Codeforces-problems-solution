///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
typedef unsigned long long ull;
using namespace std;
int main()
{
    int a,b,c,d,p,q,x,y;
    cin>>p>>q>>x>>y;
    if(x>q){
        a=x;b=y;
        c=p;d=q;
    }
    else{
        a=p;b=q;
        c=x;d=y;
    }
    if(c<=b){
        if(c>a&&b<=d) cout<<c<<" "<<b<<endl;
        else if(c<=a&&b>d) cout<<a<<" "<<d<<endl;
        else if(c<=a&&b<=d) cout<<a<<" "<<b<<endl;
        else if(c>a&&b>d) cout<<c<<" "<<d<<endl;
    }
    else cout<<-1<<endl;


    return 0;
}


///...........Alhamdulillah.........///






