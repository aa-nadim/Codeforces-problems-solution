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
    char a;cin>>a;
    if(a>='a'&&a<='z')  cout<<"a"<<endl;
    else cout<<"A"<<endl;
    return 0;
}

