///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    test{
        int n,mx,mi,i,x,s;cin>>n;
        int arr[n+1];
        for(int k=0;k<n;k++) cin>>arr[k];arr[n]=2000;

        mx=i=x=0;mi=900000;
        for(int k=0;k<n;k++){
            s=arr[k+1]-arr[k];
            if(s<3){
                x++;
                i++;
            }
            else{
                mx=max(mx,x);
                mi=min(mi,i);
                x=0;i=0;
            }
        }
        cout<<mi+1<<" "<<mx+1<<endl;

    }
    return 0;
}///...........Alhamdulillah.........///

