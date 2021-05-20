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
        int n;cin>>n;
        long long int arr[2*n];
        for(int i=0;i<2*n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+2*n);
        //if(n%2!=0)
            cout<<arr[n]-arr[n-1]<<endl;
        //else
          //  cout<<arr[n]-arr[n-1]<<endl;
    }

}
///Alhamdulillah............

