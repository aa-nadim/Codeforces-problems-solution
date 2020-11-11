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
    int n;cin>>n;
    int a[n],d,s;s=d=0;
    for(int i=0;i<n;i++) cin>>a[i];
    int k=1,t,i;t=n-1;i=0;
    while(1){
        if(i==t && n&1){
            s+=a[i];break;
        }
        else if(i==t){
            d+=a[i];break;
        }
        if(k&1)s+=max(a[i],a[t]);
        else d+=max(a[i],a[t]);
        if(a[i]<a[t]) t--;
        else i++;
        k++;
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}///...........Alhamdulillah.........///

