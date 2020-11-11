#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;cin>>T;
    while(T--){
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }sort(arr,arr+3);
     if(arr[2]>arr[0]+arr[1])
        cout<<arr[0]+arr[1]<<endl;

     else
        cout<<(arr[0]+arr[1]+arr[2])/2<<endl;

    }
    return 0;
}
