
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
    int n,h,sum=0;
    cin>>n>>h;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(h<arr[i])
            sum+=2;
        else
            sum+=1;
    }
    cout<<sum<<endl;
}
///Alhamdulillah............


