#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    long long int arr[3],sum;
    for(int i=0;i<3;i++)
        cin>>arr[i];
    sort(arr,arr+3);
    sum=arr[0]+arr[1];
    if(sum>=(arr[2]-1))
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    }


    return 0;
}
