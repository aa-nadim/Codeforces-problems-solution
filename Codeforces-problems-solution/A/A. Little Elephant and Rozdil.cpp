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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=*min_element(a,a+n),c=0,t;
    for(int i=0;i<n;i++){
        if(a[i]==x){
            c++;t=i+1;
        }
    }
    if(c==1) cout<<t<<endl;
    else cout<<"Still Rozdil"<<endl;
    return 0;
}


