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
    int n,r4,r3,r2,re4,re3,re2;
    cin>>n;
    for(int i=n+1;i<=9012;i++){
        r4=i/1000;
        re4=i%1000;
        r3=re4/100;
        re3=re4%100;
        r2=re3/10;
        re2=re3%10;
        if(r4!=r3 && r4!=r2 && r4!=re2 && r3!=r2 && r3!=re2 && r2!=re2){
            cout<<i<<endl;
            break;
        }
    }

}
///Alhamdulillah............



