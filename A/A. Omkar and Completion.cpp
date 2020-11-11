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
        int n,i;cin>>n;
        int a[1000];a[0]=1;a[1]=1;
        for(int i=2;i<n;i++){
            if(a[i-2]+a[i-1]!=a[i-1])a[i]=a[i-1];
            else a[i]=a[i-1]+1;
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";cout<<endl;
    }
    return 0;
}

