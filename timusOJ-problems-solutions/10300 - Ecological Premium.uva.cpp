#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,f,sum;
    cin>>T;
    int a,b,c;
    while(T--){
        cin>>f;
        sum=0;
        while(f--){
            cin>>a>>b>>c;
            sum=sum+a*c;
        }
        cout<<sum<<endl;
    }
    return 0;
}




