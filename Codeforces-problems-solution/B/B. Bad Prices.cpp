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
    int t;cin>>t;while(t--){
    int n,c=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)   cin>>a[i];
    int mi=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(mi<a[i])c++;
        else mi=a[i];
    }
    cout<<c<<endl;
    }
    return 0;
}

