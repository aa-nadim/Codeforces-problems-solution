#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,year=0;
    cin>>a>>b;

    for(int i=1;i<10;i++){
        a=3*a;
        b=2*b;
        year++;
        if(a>b)
            break;
    }
    cout<<year<<endl;

    return 0;
}
