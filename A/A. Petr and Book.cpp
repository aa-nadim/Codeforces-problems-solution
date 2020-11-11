#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int n;cin>>n;
    int a[7],s=0;
    int k=0,x;
    for(int i=0;i<7;i++){
        cin>>a[i];
        s+=a[i];
    }
    while(1){
        if(n<=0)break;
        if(s>=n){
            n-=a[k++];
        }
        if(s<n){
            n-=s;
        }
    }
    if(k%7==0) cout<<7<<endl;
    else cout<<k%7<<endl;
    return 0;
}


