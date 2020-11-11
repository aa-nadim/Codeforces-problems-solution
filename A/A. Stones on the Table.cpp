#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0;i<n;i++){
        if(str[i]==str[i+1])
            count++;
    }
    cout<<count<<endl;
    return 0;
}
