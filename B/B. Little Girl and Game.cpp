#include<bits/stdc++.h>
using namespace std;
int main()
{
        string s; cin>>s;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        int k=0;
        for(int i=0;i<s.size();i++)if(mp[s[i]]%2)k++;

        if(k==0) cout<<"First";
        else if(k%2) cout<<"First";
        else cout<<"Second";

	return 0;
}

