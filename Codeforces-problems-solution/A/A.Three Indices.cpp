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
        int p;cin>>p;
        int a[p+1];
        for(int i=1;i<=p;i++)cin>>a[i];
        bool ok=false;
        for(int i=2;i<p;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                cout<<"YES"<<endl;
                cout<<i-1<<" "<<i<<" "<<i+1<<endl;ok=true;break;
            }
        }
        if(!ok)cout<<"NO"<<endl;
    }
    return 0;
}

