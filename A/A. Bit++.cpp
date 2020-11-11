#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
        if(str[i]=="++X" || str[i]=="X++")
            count++;
        else
            count--;
    }
    cout<<count<<endl;

    return 0;
}
