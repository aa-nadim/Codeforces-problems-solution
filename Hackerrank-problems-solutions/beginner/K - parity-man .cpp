#include <iostream>
using namespace std;
int main()
{
    int a[8], n, i,count=0,T;
    cin>>T;

    for(int j=1;j<=T;j++){
        cin>>n;
        for(i=0; n>0; i++){
            a[i]=n%2;
            n= n/2;
        }

    /*for(i=i-1 ;i>=0 ;i--){
         cout<<a[i];
    }*/

        for(i=0;i<8;i++){
            if(a[i]==1)
            count++;
         }
    cout<<"Case "<<j<<": ";
    if(count%2==0)
        cout<<"even"<<endl;
    else
        cout<<"odd"<<endl;

    }

}


