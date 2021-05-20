#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
typedef long long v99;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int a,b,c;a=b=c=0;
    for(int i=0;i<n;i++){
        if(i%2==0 && a!=b){ c++;a=0;b=0;s[i-2]='a';s[i-1]='b';}
        if(s[i]=='a')a++;
        else b++;
    }
    if(a!=b){c++;a=0;b=0;s[n-2]='a';s[n-1]='b';}
    cout<<c<<endl<<s;
    return 0;
}

