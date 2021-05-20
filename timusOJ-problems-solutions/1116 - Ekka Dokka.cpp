#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
int main()
{
    v99 t,k=1;cin>>t;
    while(t--){
        v99 n,a,b;cin>>n;
        if(n%2!=0) cout<<"Case "<<k++<<": Impossible"<<endl;
        else{
            a=n/2;
            b=2;
            while(a%2==0){
                a/=2;
                b*=2;
            }
            cout<<"Case "<<k++<<": "<<a<<" "<<b<<endl;
        }
    }
    return 0;
}


