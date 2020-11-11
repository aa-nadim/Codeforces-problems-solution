#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
const double pi = acos(-1.0);

int main()
{
    int n,t=0,temp;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int m;cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];

    }
    int c=1;
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            if(b[i]%a[i]==0){
                t=b[i]/a[i];
                temp=i;
                break;
            }
        }
        if(t!=0)break;
    }
    cout<<t<<endl;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            if(b[j]%a[i]==0 && b[j]/a[i]==t && i!=temp){
                c++;break;
            }
        }
    }
    cout<<c;
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

