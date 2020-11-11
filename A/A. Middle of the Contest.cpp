#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,m1,m2,M;
    double s;
    cin>>h1>>m1;cin>>h2>>m2;
    M=m1+m2+60*h1+60*h2;
    s=M/120.0;
    if(10.00>s){
        if(M%120<10)cout<<"0"<<M/120<<":"<<"0"<<M%120<<endl;
        else cout<<"0"<<M/120<<":"<<M%120<<endl;
    }else{
        if(M%120<10)cout<<"0"<<M/120<<":"<<"0"<<M%120<<endl;
        else cout<<M/120<<":"<<M%120<<endl;
        }
    return 0;
}
