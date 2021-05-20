#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int h,m,hh,mm;
        cin>>h>>m;
        hh=23-h;
        mm=60-m;
        cout<<60*hh+mm<<endl;
    }
    return 0;
}
