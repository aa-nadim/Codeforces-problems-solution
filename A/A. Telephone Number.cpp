#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,count;
    string s;
    cin>>t;
    while(t--){cin>>n>>s;count=0;
        for(int i=0;i<n-10;i++){if(s[i]=='8'){cout<<"YES"<<endl;count++;break;}}
        if(count==0)cout<<"NO"<<endl;}
    return 0;
}
