#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(abs(x)==x && abs(y)==y)
        cout<<"1st Quadrsnt"<<endl;
    else if(abs(x)!=x && abs(y)==y)
        cout<<"2nd Quadrsnt"<<endl;
    else if(abs(x)!=x && abs(y)!=y)
        cout<<"3rd Quadrsnt"<<endl;
    else if(abs(x)==x && abs(y)!=y)
        cout<<"4th Quadrsnt"<<endl;
    return 0;
}
