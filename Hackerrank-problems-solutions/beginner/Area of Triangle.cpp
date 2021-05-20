#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3,Pve,Nve;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    double area,temp;
    Pve=(x1*y2)+(x2*y3)+(x3*y1);//cout<<Pve<<endl;
    Nve=(x1*y3)+(x3*y2)+(x2*y1);//cout<<Nve<<endl;
    temp=abs(Pve-Nve);cout<<temp<<endl;
    area=temp/2;
    cout<<area<<endl;

    return 0;
}
