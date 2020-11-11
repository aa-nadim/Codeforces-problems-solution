#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H,L;
    cin>>H>>L;
    long double x=((L*L)-(H*H))/(2*H);

    cout<<fixed<<setprecision(7)<<x<<endl;
    return 0;
}
