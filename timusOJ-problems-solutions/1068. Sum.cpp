#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    if(n>0){
        for(int i=1;i<=n;i++)
            sum=sum+i;
        cout<<sum<<endl;
    }
    else{
        for(int i=n;i<=1;i++)
            sum=sum+i;
        cout<<sum<<endl;
    }

    return 0;
}
