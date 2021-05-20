#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t,n,b;
    double sum,a;
    long long int ans;
    cin>>t;

    for(int j=1;j<=n;j++){
            sum=sum+log10(j);
        }
    for(int i=1;i<=t;i++){
        cin>>n>>b;
        sum=0;
        for(int j=1;j<=n;j++){
            sum=sum+log10(j);
        }
        a=sum/log10(b);
        ans=floor(a)+1;
        cout<<"Case "<<i<<": "<<ans<<endl;

    }
    return 0;
}
