#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ex=2,r=0,x;
        while(r<=n){
            r=pow(2,ex)-1;
            if(n%r==0){
                x=n/r;break;
            }
            ex++;
        }
        cout<<x<<endl;
    }
    return 0;
}






