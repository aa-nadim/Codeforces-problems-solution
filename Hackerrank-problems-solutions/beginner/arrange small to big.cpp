#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int T,arr[3];
    cin>>T;
    for(int j=1;j<=T;j++){
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);

            cout<<"Case "<<j<<": "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;



    }

    return 0;
}

