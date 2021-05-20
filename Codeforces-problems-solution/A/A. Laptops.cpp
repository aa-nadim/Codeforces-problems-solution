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
    int a[n],b[n],t;
    for(int i=0;i<n;i++) cin>>a[i];
    int x=*max_element(a,a+n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int y=*max_element(b,b+n);
    for(int i=0;i<n;i++){
        if(y==b[i]){
            t=a[i];break;
        }
    }
    if(t!=x) cout<<"Happy Alex"<<endl;
    else cout<<"Poor Alex"<<endl;

    return 0;
}///...........Alhamdulillah.........///

