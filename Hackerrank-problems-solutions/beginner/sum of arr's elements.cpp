#include<iostream>
using namespace std;

int main()
{
    int T,n,mo,sum;
    float di,x;
    cin>>T;
    while(T--){
            sum=0;
          cin>>n;
            mo=n%10;
            ///cout<<mo<<endl;
            di=n/10000.0;
            x=(int)di;
               /// cout<<x<<endl;
        sum=sum+mo+x;

        cout<<"Sum = "<<sum<<endl;

    }


    return 0;
}
