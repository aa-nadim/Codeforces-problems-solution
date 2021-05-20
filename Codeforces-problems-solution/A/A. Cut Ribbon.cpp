/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;
int main()
{
    int n,a,b,c,min,mid,max,temp,ans;
    cin>>n>>a>>b>>c;
    temp = (a < b)    ? a : b;
    min =  (c < temp) ? c : temp;
    temp = (a > b)    ? a : b;
    max =  (c > temp) ? c : temp;
    temp = (a > b)    ? a : b;
    mid =  (c < temp) ? c : temp;
    if(n%min==0)
        ans=n/min;
    temp=n;
    else{
        while(temp%min==0)
    }
    return 0;
}
///Alhamdulillah............


