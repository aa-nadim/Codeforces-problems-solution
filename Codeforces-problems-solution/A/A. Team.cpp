#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count,temp;
    temp=0;
    //vector< int > v[3];
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1)
                count++;
        }
        if(count>1){
            temp++;
            //count=0;
        }
    }
    cout<<temp<<endl;
    return 0;
}
