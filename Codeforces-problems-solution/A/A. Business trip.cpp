///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main(){

    int n,a[12];cin>>n;
    for(int i=0;i<12;i++) cin>>a[i];
    sort(a,a+12);
    int s=0,t=0;
    for(int i=11;i>=0;i--){
        if(s>=n) break;
        s+=a[i];
        t++;
    }
    if(n>s) cout<<-1<<endl;
    else cout<<t<<endl;


    return 0;
}///...........Alhamdulillah.........///

