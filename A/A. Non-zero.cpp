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

        int n,arr[100],sum,count;
        cin>>n;
        sum=count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                arr[i]=1;
                count++;
            }
            sum+=arr[i];

        }
        sort(arr,arr+n);
        if(sum==0){
            count++;
        }
        cout<<count<<endl;
    }


}
///Alhamdulillah............

