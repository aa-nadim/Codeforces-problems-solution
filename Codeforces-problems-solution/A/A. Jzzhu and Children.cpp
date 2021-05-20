#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=ceil(a[i]/m);
    }
    int x=*max_element(a,a+n);
    for(int i=n-1;i>=0;i--){
        if(x==a[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }
}

