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
    int n;cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count,temp;
    count=1;temp=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            count++;
        }
        else{
            if(temp<=count)
                temp=count;
            count=1;
        }
    }
    if(temp==0 || temp<count)
        temp=count;
    cout<<temp<<endl;
}
///Alhamdulillah............
