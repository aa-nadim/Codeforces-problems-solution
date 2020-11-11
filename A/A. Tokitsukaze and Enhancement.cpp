#include <iostream>
using namespace std;

int main() {

    int x,a;
    cin>>x;
    if(x<30 && x>100)
        return 0;
    else
    {
        a=x%4;
        if(a==1)
            cout<<0<<" A"<<endl;
        else if(a==2)
            cout<<1<<" B"<<endl;
        else if(a==3)
            cout<<2<<" A"<<endl;
        else if(a==0)
            cout<<1<<" A"<<endl;
    }

    return 0;
}
