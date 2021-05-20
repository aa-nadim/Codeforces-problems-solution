///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main(){
    int n,mx,x,s;cin>>n;
        int arr[n+2];
        for(int k=1;k<=n;k++) cin>>arr[k];
        arr[0]=0;arr[n+1]=1001;
        mx=x=0;
        for(int k=n+1;k>0;k--){
            s=arr[k]-arr[k-1];
            if(s==1){
                x++;
            }
            else{
                mx=max(mx,x);
                x=0;
            }
        }
        mx=max(mx,x);
        if(mx==0) cout<<0<<endl;
        //else if(arr[0]==1 && arr[1]==2) cout<<mx<<endl;
        else cout<<mx-1<<endl;

    return 0;
}///...........Alhamdulillah.........///

