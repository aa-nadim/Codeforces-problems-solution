#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<int,string>mp;
    map<int,string>mp1;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        mp[i]=s;
    }
    for(int i=1;i<=m;i++){
        string s;
        cin>>s;
        mp1[i]=s;
    }
    int t,input;
    string s1,s2;
    cin>>t;
    while(t--){
        cin>>input;
        if(input%n==0)
            s1=mp[n];
        else
            s1=mp[input%n];
        if(input%m==0)
            s2=mp1[m];
        else
            s2=mp1[input%m];
        cout<<s1<<s2<<endl;
    }
    return 0;
}
