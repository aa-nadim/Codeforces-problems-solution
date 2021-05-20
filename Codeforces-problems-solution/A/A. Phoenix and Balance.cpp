#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int x,y;x=y=0;
        for(int i=n-1;i>=n/2;i--){
            x+=pow(2,i);
        }
        for(int i=1;i<n/2;i++){
            y+=pow(2,i);
        }
        y+=pow(2,n);
        cout<<abs(y-x)<<endl;

    }
    return 0;
}

