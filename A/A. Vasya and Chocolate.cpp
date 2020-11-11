#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long long int s,a,b,c,p,r;
    long long int sum;
    cin>>s>>a>>b>>c;
    r=s/c;
    p=r/a;
    sum=r+p*b;
    cout<<sum<<endl;
    }

    return 0;
}
