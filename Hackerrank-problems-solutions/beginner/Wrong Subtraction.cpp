#include <iostream>

using namespace std;

int main()
{
    int n,p,result;
    cin>>n>>p;

    for(int i=0;i<p;i++){
        if(n%10==0)
            result=n/10;

        else
            result=n-1;
        n=result;
    }
    cout<<result<<endl;

    return 0;
}
