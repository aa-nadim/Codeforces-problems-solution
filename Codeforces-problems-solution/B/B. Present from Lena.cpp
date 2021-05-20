///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n;cin>>n;int i,j,k,l;
        for(i=0;i<=n;i++){
            for(j=n;j>i;j--){
                cout<<"  ";
            }
            for(k=0;k<=i;k++){
                cout<<k;
                if(i!=0&&k!=i)cout<<" ";
                else cout<<" ";
            }
            for(l=i-1;l>=0;l--){
                cout<<l;
                if(l!=0)cout<<" ";
            }cout<<endl;

        }
        for(i=n-1;i>=0;i--){
            for(j=n;j>i;j--){
                cout<<"  ";
            }
            for(k=0;k<=i;k++){
                cout<<k;
                //if(i!=0&&k!=i)
                    cout<<" ";

            }
            for(l=i-1;l>=0;l--){
                cout<<l;
                if(l!=0)cout<<" ";
            }
            cout<<endl;
        }

}




