#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    int t,k=1;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1],odd=0,even=0;a[n]=2000;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) even++;
            else odd++;
        }
        sort(a,a+n);
        if(even%2==0 && odd%2==0) cout<<"YES"<<endl;
        else{
            int x=0;
            for(int i=0;i<n;i++){
                if(abs(a[i]-a[i+1])==1){
                    x=1;break;
                }
            }
            if(x==1) cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11


