/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**               Nadim             ||
/**           Dept of ICE           ||
/**               NSTU              ||
/**_________________________________||
/***********************************||
/************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2,str;
    cin>>s;
    cin>>s1;
    cin>>s2;
    str=s+s1;
    sort(str.begin(), str.end());
    sort(s2.begin(), s2.end());
    if(s2==str)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
///Alhamdulillah............


