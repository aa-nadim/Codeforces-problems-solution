#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count, arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1 && i<3 && j<3){
                count=4-(i+j);
                 cout<<count<<endl;
            }
            else if(arr[i][j]==1 && i<3 && j>2){
                count=2-i+j-2;
                cout<<count<<endl;
            }
            else if(arr[i][j]==1 && i>2 && j<3){
                count=2-j+i-2;
                cout<<count<<endl;
            }
            else if(arr[i][j]==1 && i>2 && j>2){
                count=(i+j)-4;
                 cout<<count<<endl;
            }
        }
    }

    return 0;
}
