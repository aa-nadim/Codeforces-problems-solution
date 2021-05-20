#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,x;
    cin>>a>>b>>c;
    x=abs(a-b);          ///modolus
    if(a==0 && b==0 && c!=0)
        cout<<"?"<<endl;
    else if(a==0 && b==0 && c==0)
        cout<<"0"<<endl;
    else if(x==c&&x!=0)
        cout<<"?"<<endl;
    else if(a==b && b==c)
        cout<<"?"<<endl;
    else if(x<c)
        cout<<"?"<<endl;
    else if(a>b)
        cout<<"+"<<endl;
    else if(x==0)
        cout<<"0"<<endl;
    else
        cout<<"-"<<endl;


    return 0;

}
