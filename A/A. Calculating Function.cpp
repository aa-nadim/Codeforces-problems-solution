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
    long long int n,s1,s2,sum,t;
    cin>>n;

    if(n%2!=0){
        t=n/2;
        s2=(t+1)*(t=2);
        s1=(t+1)*(t+1);
        sum=s2-s1;

    }
    else{
        t=n/2;
        s2=t*(t+1);
        s1=t*t;
        sum=s2-s1;
    }
    cout<<sum<<endl;
    //cout<<sum<<endl;
}
///Alhamdulillah............

