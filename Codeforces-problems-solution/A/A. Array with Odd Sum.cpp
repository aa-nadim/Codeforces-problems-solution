#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,arr[2000],sum;
    while(t--){
        int k=0;
        cin>>n;
        int p=n;
        while(n--){
            int a;cin>>a;
            k+=a%2;
        }
        if(k&&p-k ||p==k&&p%2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
