#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main ()
{
    int n,a,b,c;
    int arr[3];
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j];
        }
        sort(arr,arr+3);

        a=pow(arr[0],2);
        b=pow(arr[1],2);
        c=pow(arr[2],2);
        cout<<"Case "<<i<<": ";
        if(c==(a+b))
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

    }

    return 0;
}

