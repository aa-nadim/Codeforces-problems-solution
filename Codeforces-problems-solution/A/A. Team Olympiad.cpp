///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    int n,t,temp;cin>>n;
    int arr[n],a1[n],a2[n],a3[n],x,y,z;
    x=y=z=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1) a1[x++]=i+1;
        else if(arr[i]==2) a2[y++]=i+1;
        else a3[z++]=i+1;
    }
    t=min(x,y);temp=min(t,z);
    if(temp==0) cout<<0<<endl;
    else{
        cout<<temp<<endl;
        int i=0;
        while(temp--){
            cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;i++;
        }
    }
    return 0;
}


///...........Alhamdulillah.........///





