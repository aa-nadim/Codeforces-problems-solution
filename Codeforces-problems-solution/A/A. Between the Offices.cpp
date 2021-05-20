#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count1=0,count2=0;
    string str;
    cin>>n;
    cin>>str;

    for(int i=0;i<n;i++){
        if(str[i]=='S'&&str[i+1]=='F')
            count1++;
        else if(str[i]=='F'&&str[i+1]=='S')
            count2++;
    }
    if(count1>count2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
