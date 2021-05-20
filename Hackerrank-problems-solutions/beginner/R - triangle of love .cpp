#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int sum,a;
    int arr[3];

        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        sort(arr,arr+3);

        sum=arr[0]+arr[1];

        a=arr[2]-sum+1;

        if(sum>arr[2])
            cout<<"0"<<endl;
        else
            cout<<a<<endl;

    return 0;
}


