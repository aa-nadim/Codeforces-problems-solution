///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
#define whp   " "
#define mxi 99999

typedef long long v99;
typedef unsigned long long ull;
using namespace std;

int main()
{
    test
    {
        bool flag=true;
        int n;cin>>n;
        int a[n],t,count=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) t=i-1;
        }
        for(int i=t;i>=0;i--){
            if(a[i]==0){
                count++;
            }
            else{
                if(count>4){
                    flag=true;
                    count=0;
                }
                else{
                    flag=false;
                    break;
                }
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


///...........Alhamdulillah.........///





