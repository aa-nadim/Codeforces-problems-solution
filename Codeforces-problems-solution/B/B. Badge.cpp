//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
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

    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
