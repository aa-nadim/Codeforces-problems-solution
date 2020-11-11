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
    int n,t;
    bool flag=false;
    cin>>n;
    int a,arr[100],b,brr[100],crr[200],drr[100];
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>arr[i];
        crr[i]=arr[i];
    }
    cin>>b;t=a;
    for(int i=0;i<b;i++){
        cin>>brr[i];
        crr[t]=brr[i];
        t++;
    }
    sort(crr,crr+(a+b));
    std::set<int>s;
    for(int i=0;i<(a+b);i++){
        if(crr[i]!=crr[i+1])
            s.insert(crr[i]);
    }

    if(s.size()==n)
       cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
}
///Alhamdulillah............

