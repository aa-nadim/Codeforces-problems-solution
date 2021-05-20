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
    int n;cin>>n;
    int s,i,t,sum;
    s=5;i=1;t=1;
    while(s<n){
        i*=2;s+=5*i;t=i/2;
    }
    s=s-5*i;sum=n-s;
         if(0<sum && sum<=t) cout<<"Sheldon"<<endl;
         else if(t<sum && sum<=t*2) cout<<"Leonard"<<endl;
         else if(t*2<sum && sum<=t*3) cout<<"Penny"<<endl;
         else if(t*3<sum && sum<=t*4) cout<<"Rajesh"<<endl;
         else if(t*4<sum && sum<=t*5) cout<<"Howard"<<endl;

    return 0;
}///...........Alhamdulillah.........///



