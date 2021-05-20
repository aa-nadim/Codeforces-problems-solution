#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
typedef long long v99;
using namespace std;
int main()
{
    int w,x,y,z;w=x=y=z=0;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        if(a==1) w++;
        else x++;
        if(b==1) y++;
        else z++;
    }

    cout<<min(w,x)+min(y,z)<<endl;
    return 0;
}

