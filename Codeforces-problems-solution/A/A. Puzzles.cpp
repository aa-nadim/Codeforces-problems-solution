
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
    int n,m,arr[50];
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    cout<<arr[n-1]-arr[0]<<endl;
}
///Alhamdulillah............
