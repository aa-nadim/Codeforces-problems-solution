#include<bits/stdc++.h>

using namespace std;

int main()

{
    double n,remainder;
    cin>>n;

    remainder= n%10.0;
    if(remainder>0.5)
        cout<<ceil(n)<<endl;
    else
        cout<<floor(n)<<endl;


}

