#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,x,cn,k,m;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        cn=0;k=0;
        cin>>x;
        m=x;
        cout<<"Case "<<j<<": ";
        if(x%2!=0)
            cout<<"Impossible"<<endl;
        else
        {
            while(x%2==0)
            {
                x=x/2;
            }
            cout<<x<<" "<<m/x<<endl;
        }

    }
    return 0;
}
