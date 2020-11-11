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
        string s,x;cin>>s;cin>>x;
        int t=0,p;
        for(int i=0;i<n;i++){
            int a=s[i]-'0';
            int b=x[i]-'0';
            p=abs(a-b);
            if(p>5) t+=(10-p);
            else t+=p;
        }
        cout<<t<<endl;


    return 0;
}///...........Alhamdulillah.........///

