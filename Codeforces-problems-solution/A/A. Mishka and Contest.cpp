#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;
map<int,int>mp;
int gcd(int a,int b){
    if(b==0)return a;
    return (b,a%b);
}
int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    int x,y=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>k)y=i;
    }
    for(int i=0;i<n;i++){
        if(a[i]>k){
            x=i;break;
        }
    }
    if(y==-1)cout<<n<<endl;
    else cout<<n-(y-x+1)<<endl;
}

