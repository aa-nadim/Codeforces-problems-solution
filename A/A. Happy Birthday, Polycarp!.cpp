#include<bits/stdc++.h>
using namespace std;
int arr[81];
int main()
{
    int count,k,t,j;
    long long int i,n;k=0;
    for(i=1;i<10;i++)
        arr[k++]=i;
    for(i=11; i<=100; i++){
        if(i%11==0)
            arr[k++]=i;
    }
    for(i=111; i<=1000; i++){
        if(i%111==0)
            arr[k++]=i;
    }
    for(i=1111; i<=10000; i++){
        if(i%1111==0)
            arr[k++]=i;
    }
    for(i=11111; i<=100000; i++){
        if(i%11111==0)
            arr[k++]=i;
    }
    for(i=111111; i<=1000000; i++){
        if(i%111111==0)
            arr[k++]=i;
    }
    for(i=1111111; i<=10000000; i++){
        if(i%1111111==0)
            arr[k++]=i;
    }
    for(i=11111111; i<=100000000; i++){
        if(i%11111111==0)
            arr[k++]=i;
    }
    for(i=111111111; i<=1000000000; i++){
        if(i%111111111==0)
            arr[k++]=i;
    }
    //for(int j=0;j<81;j++)
       // cout<<arr[j]<<endl;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        for(j=0;j<81;j++){
            if(n<arr[j]){
                break;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
