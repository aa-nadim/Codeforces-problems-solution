#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,x;cin>>num;
    double temp;
    temp=sqrt(num);//cout<<temp<<endl;
    x=temp;//cout<<x<<endl;
    //cout<<temp-x<<endl;
    if(temp-x>=0.5)
        cout<<ceil(temp)<<endl;
    else
        cout<<floor(temp)<<endl;

    return 0;
}
