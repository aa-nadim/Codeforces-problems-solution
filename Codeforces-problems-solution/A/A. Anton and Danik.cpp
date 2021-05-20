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
    int n,a,d;cin>>n;
    string str;
    cin>>str;
    a=d=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;
}
///Alhamdulillah............
