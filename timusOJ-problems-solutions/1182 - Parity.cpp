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
    int t,k=1;cin>>t;
    while(t--){
        int n,one=0;cin>>n;
        while(n>0){
            if(n%2==1) one++;
            n/=2;
        }
        if(one%2==1) cout<<"Case "<<k++<<": odd"<<endl;
        else cout<<"Case "<<k++<<": even"<<endl;
    }
    return 0;
}



