#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;
int main()
{
    int n;cin>>n;
    int f,z;f=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==5) f++;
    }z=n-f;
    if(z==0)cout<<-1<<endl;
    else if(f>8){
        f/=9;f*=9;
        while(f--) cout<<5;
        while(z--) cout<<0;
        cout<<endl;
    }
    else cout<<0<<endl;
    return 0;
}




