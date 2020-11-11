#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum;
    cin>>n;
    sum=0;
    for(int i=n;i>0;i--)
        sum+=1/(double)i;
    cout<<fixed<<setprecision(12)<<sum<<endl;

    return 0;
}
