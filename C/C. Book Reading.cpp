#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
v99 temp,x,r,s,sum;
int main()
{
    int t;cin>>t;while(t--){
            v99 n,m;cin>>n>>m;temp=n/m;
            x=temp/10;r=temp%10;s=sum=0;
            for(int i=1;i<10;i++)s+=(m*i)%10;
            sum+=s*x;
            for(int i=1;i<=r;i++)sum+=(m*i)%10;
            cout<<sum<<endl;
    }
    return 0;
}

