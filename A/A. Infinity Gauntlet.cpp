#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>mp;
    mp["purple"]="Power";
    mp["green"]="Time";
    mp["blue"]="Space";
    mp["orange"]="Soul";
    mp["red"]="Reality";
    mp["yellow"]="Mind";
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        mp[str]="OK";
    }
    cout<<6-n<<endl;
    map<string,string>::iterator it;
    for(it=mp.begin();it!=mp.end();++it){
        if(mp[str]!="OK")
            cout<<mp[str]<<endl;
    }

    return 0;

}
