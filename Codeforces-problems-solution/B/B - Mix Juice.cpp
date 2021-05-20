#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999
vector<int>v;
map<int,int>mp;
map<int,int>::iterator it;
int gcd(int a,int b){
    if(b==0)return a;
    return (b,a%b);
}
int main()
{
    int n,k;cin>>n>>k;
    int a[n],s=0;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<k;i++)s+=a[i];
    cout<<s<<endl;
    return 0;
}

