///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,l,temp;cin>>n>>l;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    double ans,p,t,k;
    ans=temp=t=a[0];p=0;k=l-a[n-1];
    for(ll i=1;i<n;i++){
        ans=(double)(a[i]-temp)/2;temp=a[i];
        if(p<ans) p=ans;
    }
    if(t>=p && t>=k) cout<<fixed<<setprecision(10)<<t<<endl;
    else if(k>=p && k>=t) cout<<fixed<<setprecision(10)<<k<<endl;
    else cout<<fixed<<setprecision(10)<<p<<endl;

    return 0;
}


///...........Alhamdulillah.........///










