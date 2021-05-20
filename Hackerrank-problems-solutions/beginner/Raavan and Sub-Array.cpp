#include<bits/stdc++.h>
using namespace std;
typedef long long v99;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

int main()
{
    v99 t,k=1;cin>>t;
    while(t--){
        v99 row,col; cin>>row>>col;
        cout<<"Case "<<k++<<": ";
        v99 ans=row*col;
        if(row==1 || col==1){
            cout<<max(row,col)<<endl;
        }
        else if(row==2 || col==2){
            v99 big = max(row, col);
            ans=big;
            if(big%4==1 || big%4==3) ans++;
            if(big%4==2) ans+=2;
            cout<<ans<<endl;
        }
        else if(ans%2==1){
            cout<<ans/2+1<<endl;
        }
        else
            cout<<ans/2<<endl;
    }
}
