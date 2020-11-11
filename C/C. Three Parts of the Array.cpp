#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        ll s=0;
        ll n;cin>>n;
        ll a[n],b[n],c[n];
        memset(b, 0, sizeof(b));
        memset(c, 0, sizeof(c));

        ll x;cin>>x;a[0]=b[0]=x;
        for(ll i=1;i<n;i++){
            cin>>x;
            a[i]=x;
            b[i]=(b[i-1]+x);
        }c[n-1]=a[n-1];
        for(ll i=n-2;i>=0;i--)c[i]=(a[i]+c[i+1]);
        //for(ll i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
        //for(ll i=0;i<n;i++)cout<<b[i]<<" ";cout<<endl;
        //for(ll i=0;i<n;i++)cout<<c[i]<<" ";cout<<endl;
        ll i=0;
        ll j=n-1;
        while(i<j){
            if(b[i]==c[j]){
                s=b[i];i++;j--;
            }
            else if(b[i]<c[j])
                i++;
            else
                j--;
        }
        cout<<s<<endl;
    }
    return 0;
}

