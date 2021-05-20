#include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999

vector<int>v;
map<int,int>mp;
map<int,int>::iterator it;

int main()
{
        //freopen("input.txt", "rt", stdin);
        //freopen("output.txt", "wt", stdout);
        v99 n;cin>>n;
        v99 a[n];
        for(v99 i=0;i<n;i++){
            cin>>a[i];
        }sort(a,a+n);
        v99 x=a[0],y=a[n-1],c=0,d=0,s,di=a[n-1]-a[0];
        for(v99 i=0;i<n;i++){
            if(a[i]==x)c++;
            if(a[i]==y)d++;
        }
        if(c==n)s=n*(n-1)/2;
        else s=c*d;
        cout<<di<<" "<<s<<endl;

    return 0;
}

