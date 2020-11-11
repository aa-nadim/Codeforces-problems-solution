#include <iostream>
using namespace std;
int n,m,a,x,sum=0;
main()
{
    cin>>n>>m;x=m/2;
    while(n<m){
        if(m%2==0) m=m/2;
        else m=m+1;
        sum++;
    }cout<<sum+n-m<<endl;

    return 0;
}


