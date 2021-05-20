#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
#include<iostream>
using namespace std;
typedef long long v99;
const double pi = acos(-1.0);


///while(scanf("%d %d",&a,&b)!=EOF)
int main()
{
    int t;cin>>t;
    while(t--){
    int n,m,k;cin>>n>>m>>k;
    int x=n/k,y,p;
    if(x>=m)cout<<m<<endl;
    else{
        y=m-x;p=k-1;
        if(y%p==0) cout<<x-(y/p)<<endl;
        else cout<<x-1-(y/p)<<endl;
    }
    }
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

