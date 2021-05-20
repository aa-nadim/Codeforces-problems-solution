#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b;/// The input numbers are not greater than 2^32;
                        ///int == -2^31 to 2^31-1   total=2^32
                        ///long long int total= 2^64
    while(cin>>a>>b)
    {
        if(a>b)
            cout<<a-b<<endl;
        else
            cout<<b-a<<endl;
    }

    return 0;
}


