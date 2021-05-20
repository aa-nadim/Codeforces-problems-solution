///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
    int temp=1;
    for(int i=1;i<n;i++){
        if(i%2!=0 && temp%2!=0){
            for(int j=1;j<=m;j++){
                if(j%2) cout<<"B";
                else cout<<"W";
            }cout<<endl;
            temp++;
        }
        else if(i%2!=0 && temp%2==0){
            for(int j=1;j<=m;j++){
                if(j%2) cout<<"W";
                else cout<<"B";
            }cout<<endl;temp++;
        }
        else{
            for(int j=1;j<=m;j++){
                if(j%3==0) cout<<"W";
                else cout<<"B";
            }cout<<endl;
        }

    }
    if(temp%2!=0){
        for(int j=1;j<=m;j++){
            if(j%2) cout<<"B";
            else cout<<"W";
        }cout<<endl;
    }
    else{
        for(int j=1;j<=m;j++){
            if(j%2) cout<<"W";
            else cout<<"B";
        }cout<<endl;
    }
    }

    return 0;
}


///...........Alhamdulillah.........///





