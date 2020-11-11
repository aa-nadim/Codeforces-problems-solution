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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    if(n==2)
        cout<<0<<endl;
    else
        cout<<a[n-2]-a[0]<<endl;

    return 0;
}



///...........Alhamdulillah..........///

