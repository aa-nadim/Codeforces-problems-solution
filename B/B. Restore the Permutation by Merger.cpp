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
        map<int,int>mp;
        int n;cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin>>a[i];
            mp[a[i]]++;
            if(mp[a[i]]<2)cout<<a[i]<<" ";
        }cout<<endl;
    }
    return 0;
}

