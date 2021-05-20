#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,mark;cin>>t;
    map<string,int>mp;
    string str;
    while(t--){
        cin>>n>>str;
        if(n==1){
            cin>>mark;
            mp[str]+=mark;
        }
        else if(n==2) mp.erase(str);
        else cout<<mp[str]<<endl;
    }

    return 0;
}
