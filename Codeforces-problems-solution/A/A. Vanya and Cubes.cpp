#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x,L,sum,Level;
    cin>>n;
    L=x=sum=0;
    i=1;
    while(sum<=n){
        x=(i*(i+1))/2;
        sum=sum+x;
        i++;
        L++;
    }
    Level=L-1;
    cout<<Level<<endl;


    return 0;
}
