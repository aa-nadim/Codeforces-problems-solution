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
    vector<double> v;
    double n;
    while(cin>>n) v.push_back(n);
    for(int i=v.size()-1;i>=0;i--) cout<<fixed<<setprecision(4)<<sqrt(v[i])<<endl;
    return 0;
}
///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11

