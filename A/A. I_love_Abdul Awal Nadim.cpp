#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int x,mi,mx,z=0;cin>>x;
    mi=mx=x;
    for(int i=1;i<n;i++){
        int a;cin>>a;
        if(a>mx){
            z++;mx=a;
        }
        if(a<mi){
            z++;mi=a;
        }
    }
    cout<<z<<endl;
    return 0;
}

