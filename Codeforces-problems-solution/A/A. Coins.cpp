#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,s;
    cin>>n>>s;
    //if(n>s)
       // cout<<0<<endl;
    if(n>=s)
        cout<<1<<endl;
    else if(s>n){
        if(s%n==0)
            cout<<s/n<<endl;
        else
            cout<<(s/n)+1<<endl;
    }


    return 0;
}
