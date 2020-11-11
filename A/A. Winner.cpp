#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int n,x,mx=0;cin>>n;
    string s,str;
    for(int i=0;i<n;i++){
        cin>>s>>x;mp[s]+=x;
        if(mp[s]>mx){mx=mp[s];str=s;}
    }
    cout<<str<<endl;
    return 0;
}
