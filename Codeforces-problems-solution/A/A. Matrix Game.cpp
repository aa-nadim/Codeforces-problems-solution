#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int row,col;cin>>row>>col;
    int a[row+2][col+2];
    for(int i=0;i<=row+1;i++){
        for(int j=0;j<=col+1;j++){
            if(i==0 || j==0 || i==row+1 || j==col+1)
                a[i][j]=0;
            else
                cin>>a[i][j];
        }
    }
    int c=0;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(a[i][j]==1){
                j++;continue;
            }
            else if(a[i][j]==0 && a[i-1][j]==0 && a[i][j-1]==0 && a[i][j+1]==0 && a[i+1][j]==0){
                a[i][j]=1;// a[i][j+1]=1;
                c++;
            }
        }
    }
    if(c%2==1) cout<<"Ashish"<<endl;
    else cout<<"Vivek"<<endl;
    }

    return 0;
}







