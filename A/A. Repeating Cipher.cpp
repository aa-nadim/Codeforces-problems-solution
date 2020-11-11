///.................................///
///   BISMILLAHIR RAHMANIR RAHEEM   ///
///              Nadim              ///
///.................................///

#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

typedef long long ll;

int main()
{
    int a[10],sum=0;
    for(int i=0;i<10;i++){
        sum+=i+1;
        a[i]=sum;
    }
    //cout<<a[9];
    int n;cin>>n;
    string str;cin>>str;
    cout<<str[0];
    for(int i=0;a[i]<n;i++){
        cout<<str[a[i]];
    }
    cout<<endl;

    return 0;
}



///...........Alhamdulillah..........///
