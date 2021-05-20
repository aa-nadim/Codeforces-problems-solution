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
    int n;cin>>n;int e,f,g,h;
    int x,y,a,b,c,d;
    cin>>x>>y;

    cin>>a>>b;
    cin>>c>>d;

    e=max(a,c);f=min(a,c);
    g=max(b,d);h=min(b,d);
    if((x<f||e<x)&&(y<h||g<y))  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
