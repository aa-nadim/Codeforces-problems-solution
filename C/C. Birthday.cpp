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
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i+=2)cout<<a[i]<<" ";
        for(int i=n-1;i>=0;i--)if(i%2)cout<<a[i]<<" ";cout<<endl;
    }
    return 0;
}

