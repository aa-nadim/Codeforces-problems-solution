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
        string s;cin>>s;
        int n,l,r,u,d,x,y;l=r=u=d=0;
        n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='L') l++;
            else if(s[i]=='R') r++;
            else if(s[i]=='U') u++;
            else d++;
        }
        x=min(l,r);
        y=min(u,d);
        if(x==0 && y==0) cout<<0<<endl;
        else if(x==0 || y==0){
            cout<<2<<endl;
            if(y==0) cout<<"LR"<<endl;
            else cout<<"UD"<<endl;
        }
        else{
            cout<<2*(x+y)<<endl;
            for(int i=0;i<x/2;i++) cout<<"L";
            for(int i=0;i<y;i++) cout<<"U";
            for(int i=0;i<x;i++) cout<<"R";
            for(int i=0;i<y;i++) cout<<"D";
            for(int i=0;i<x/2;i++) cout<<"L";
            if(x%2!=0) cout<<"L";
            cout<<endl;
        }
    }
    return 0;
}///...........Alhamdulillah.........///

