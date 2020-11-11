///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        map<char,int>mp;
        map<char,int>::iterator it;
        int k=0,l;
        string str;cin>>str;
        l=str.length();
        for(int i=0;i<l;i++){
            if(str[i]==str[i+1]) i++;
            else{
                if(mp[str[i]]==0){
                    mp[str[i]]++;
                }
            }
        }
        for(it=mp.begin();it!=mp.end();++it)
            if((*it).second!=0) cout<<it->first;
        cout<<endl;

    }
    return 0;
}///...........Alhamdulillah.........///
