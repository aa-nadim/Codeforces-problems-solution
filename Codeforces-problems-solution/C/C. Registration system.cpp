/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

int main()
{
    map<string,int>mp;
    long long int n;cin>>n;
    string str;
    for(long long int i=0;i<n;i++){
        cin>>str;
        mp[str]++;
        if(mp[str]==1)
            cout<<"OK"<<endl;
        else
            cout<<str<<mp[str]-1<<endl;
    }


    return 0;
}
///Alhamdulillah............

