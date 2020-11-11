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
    string s1,s2,c="";
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i])
            c.push_back('0');
        else
            c.push_back('1');
    }
    cout<<c<<endl;
}
///Alhamdulillah............


