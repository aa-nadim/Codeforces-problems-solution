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
    test
    {
        v99 n,a,b,k;cin>>n>>a>>b;
        string str;
        if(a==b){
            k=96;
            for(int i=0;i<a;i++){
                k++;
                str[i]=k;cout<<str[i];
            }k++;
            for(int i=a;i<n;i++){
                str[i]=k;cout<<str[i];k++;
            }
            cout<<endl;
        }
        else{
            k=96;
        for(int i=0;i<b;i++){
            k++;
            str[i]=k;cout<<str[i];
        }
        for(int i=b;i<a;i++){
            str[i]=str[b-1];cout<<str[i];
        }
        k--;
        for(int i=a;i<n;i++){
            str[i]=k;cout<<str[i];
            k--;
        }
        cout<<endl;
        }

    }
    return 0;
}


///...........Alhamdulillah.........///






