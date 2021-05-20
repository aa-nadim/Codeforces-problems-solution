#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l,count=0,a;

    l =s.size();

    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
            count++;
    }
    a=ceil(l/2.0);
    if(count>a)
        cout<<l<<endl;
    else
        cout<<(count*2)-1<<endl;

    return 0;
}

