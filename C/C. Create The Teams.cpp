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
    test
    //while(1)
    {
        ll n,x;cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];sort(a,a+n);
        int c=0,y;
        for(ll i=n-1;i>=0;i--){
            if(a[i]>=x)c++;
            else{y=i;break;}
        }
        int t=2;
        for(ll i=y-1;i>=0;i--){
            if(a[i]*t>=x){i--;c++;t=2;}
            else t++;
        }
        cout<<c<<endl;
    }
    return 0;
}


