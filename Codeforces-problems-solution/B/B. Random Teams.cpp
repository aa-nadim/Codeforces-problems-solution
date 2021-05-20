#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
ll a,b,x,mx,mi,r;
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        ll n,m;cin>>n>>m;x=n-m;
        mx=(x*x+x)/2;
        a=n/m;b=a-1;
        r=n%m;
        mi=r*((a*a+a)/2)+(m-r)*((b*b+b)/2);
        cout<<mi<<" "<<mx<<endl;
    }
    return 0;
}

