#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,temp;
    cin>>T;
    int n,x,y;
    while(T--){
        cin>>n>>x>>y;
        temp=x;
        while(x<n){
            if(x%y!=0)
               cout<<x<<" ";
            x=x+temp;
        }
        cout<<endl;
    }

    return 0;
}


