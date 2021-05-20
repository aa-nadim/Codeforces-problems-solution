
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
    cin>>n;
    int a,count=0;
    int temp=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(temp!=a){
            temp=a;
            count++;
        }
    }
    //count++;
    cout<<count<<endl;
}
///Alhamdulillah............

