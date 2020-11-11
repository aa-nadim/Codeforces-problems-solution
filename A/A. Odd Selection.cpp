#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Test IOS long long t;cin >> t;while(t--)
using namespace std;
typedef long long v99;
int main()
{
    int t;cin>>t;while(t--){
            int n,x;cin>>n>>x;
            int a[n],odd=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2!=0) odd++;
            }
            if(odd!=0 && !(n==x && odd%2==0) && !(odd==n && x%2==0))
                cout<<"Yes"<<endl;
            else cout<<"No"<<endl;

    }
    return 0;
}

