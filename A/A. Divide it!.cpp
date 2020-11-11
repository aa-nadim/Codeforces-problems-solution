#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
    unsigned long long int n;
    int count=0;
    cin>>n;
    while(1){
        if(n==1)
            break;
        else if(n%2==0)
            n=n/2;
        else if(n%3==0)
            n=2*n/3;
        else if(n%5==0)
            n=4*n/5;
        else{
            count=-1;
            break;
        }
        count++;
    }
    cout<<count<<endl;
    }
    return 0;
}
