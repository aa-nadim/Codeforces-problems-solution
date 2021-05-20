#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long long int arr[3],i,a,b,c,result;
        for(i=0;i<3;i++)
            cin>>arr[i];
        sort(arr,arr+3);
        if(arr[0]==arr[1] && arr[0]==arr[2])
            cout<<0<<endl;
        else if((arr[0]+1)==arr[2])
            cout<<0<<endl;
        else{
            a=arr[0]+1;b=arr[1];c=arr[2]-1;
            result=2*c-2*a;
            cout<<result<<endl;
        }

    }

    return 0;
}
