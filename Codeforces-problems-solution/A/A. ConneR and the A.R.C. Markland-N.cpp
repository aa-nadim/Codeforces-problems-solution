#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
    bool flag=false;int i,j,temp1=0,temp2;
    long long int n,s,k;cin>>n>>s>>k;
    int arr[k];
    for(i=0;i<k;i++){
        cin>>arr[i];
        if(arr[i]==s)
            flag=true;
    }
    if(flag==true){

        for(i=0,j=1;i<k;i++,j++){
            if((s-j)<=0 && (s-j)!=arr[i]){
                temp1=j;
                break;
            }
        }
        for(i=0,j=1;i<k;i++,j++){
            if((s+j)!=arr[i]){
                temp2=j;
                break;
            }
        }
        if(temp1>=temp2 && temp1!=0)
            cout<<2*temp2<<endl;
        else
            cout<<2*temp1<<endl;
    }
    else
        cout<<0<<endl;
    }



    return 0;
}
