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
        v99 n,k,t;cin>>n>>k;t=k-1;
        v99 x,a,b,y,z;
        x=n%2;a=n-2*t;y=a%2;
              b=n-t;  z=b%2;
        if(x==0 && x==y && a>0){
            cout<<"YES"<<endl;
            while(t--) cout<<"2 "; cout<<a<<endl;
        }
        else if((x==1 && x==z && b>0)||n%k==0){
            cout<<"YES"<<endl;
            while(t--) cout<<"1 "; cout<<b<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}///...........Alhamdulillah.........///
