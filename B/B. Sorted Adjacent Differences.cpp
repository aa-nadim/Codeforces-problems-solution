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
    v99 n;cin>>n;
    vector<int>v;
    v99 t,a,r,k,p,b[n],dif=99999999999;
    for(v99 i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(v99 i=0;i<n-1;i++){
        if(abs(v[i+1]-v[i])<dif){
            dif=abs(v[i+1]-v[i]);
            t=i;
        }
    }
    b[0]=v[t];b[1]=v[t+1];
    v.erase(v.begin()+t-1,v.begin()+t+1);
    k=1;p=n-2;
    while(p>=0){
        dif=99999999999;
        for(v99 i=0;i<p;i++){
            if(abs(b[k]-v[i])<dif){
                dif=abs(b[k]-v[i]);
                r=i;
            }
        }
        b[++k]=v[r];
        v.erase(v.begin()+r-1);p--;
    }
    for(v99 i=0;i<n;i++) cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}


///...........Alhamdulillah.........///





