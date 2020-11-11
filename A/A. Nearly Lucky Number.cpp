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
    int n;
    string str;
    cin>>str;
    n=str.size();
    int i,count;
    i=count=0;
    while(i<n){
        if(str[i]=='4' || str[i]=='7'){
            count++;
        }
        i++;
    }
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
///Alhamdulillah............
