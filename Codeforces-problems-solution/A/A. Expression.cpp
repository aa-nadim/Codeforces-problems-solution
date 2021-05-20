/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**               Nadim             ||
/**           Dept of ICE           ||
/**               NSTU              ||
/**_________________________________||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<iostream>
#include <algorithm>
using namespace std;

bool comp(int x, int y)
{
    return (x < y);
}

int main()
{
    int a,b,c,s1,s2,s3,s4,s5,s6;
    cin>>a>>b>>c;
    s1=a*b*c;
    s2=a+b+c;
    s3=(a+b)*c;
    s4=a*(b+c);
    s5=a*b+c;
    s6=a+b*c;
    cout << std::max({s1, s2, s3, s4, s5, s6},comp) <<endl;
    return 0;
}
///Alhamdulillah............

