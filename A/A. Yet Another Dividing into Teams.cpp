#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[101],count,s;
    cin>>t;

    while(t--){
            count=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            }
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
           s=arr[i]-arr[i+1];
           if(abs(s)==1){
               count++;break;
           }
        }
        if(count==1)
            cout<<2<<endl;
        else
             cout<<1<<endl;
    }

    return 0;
}
