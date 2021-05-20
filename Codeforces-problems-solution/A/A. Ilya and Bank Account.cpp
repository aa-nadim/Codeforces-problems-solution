///                       BISMILLAHIR RAHMANIR RAHEEM
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
    int x,t,n;cin>>x;n=abs(x);
    if(x>=0) cout<<x<<endl;
    else if(-100<x && x<0){
        if(n/10>n%10 && n%10==0) cout<<0<<endl;
        else if(n/10>n%10) cout<<"-"<<n%10<<endl;
        else cout<<"-"<<n/10<<endl;
    }
    else{
        t=n%100;
        if(t/10>n%10){
            cout<<"-"<<n/100<<n%10<<endl;
        }
        else cout<<"-"<<n/10<<endl;
    }
    return 0;
}


///...........Alhamdulillah.........///





