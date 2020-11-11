#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[100],count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=k)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
