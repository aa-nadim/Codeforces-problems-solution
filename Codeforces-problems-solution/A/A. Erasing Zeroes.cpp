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
    int t;cin>>t;
    while(t--){
        string str,c="";
    cin>>str;
    int temp=0,count=0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='0')
            str[i]='1';
        else
            break;
    }
    for(int i=0;i<str.size();i++){
        if(str[i]=='1')
            temp=1;
        if(temp==1){
            if(str[i]=='0')
                count++;
        }

    }

    cout<<count<<endl;
    }

}
///Alhamdulillah............

