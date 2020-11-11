#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
const double pi=acos(-1.0);
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    test
    //while(1)
    {
        int n,m;cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
        for(int i=0;i<m;i++)cin>>b[i];sort(b,b+m);
        bool ok=false,ok1=false;int x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]==b[j]){
                    x=a[i];ok=true;break;
                }
            }
            if(ok){
                ok1=true;break;
            }
        }
        if(ok1)cout<<"YES"<<endl<<1<<" "<<x<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

