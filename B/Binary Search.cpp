#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={5,9,13,15,17,19,22,33,66,96,99},num,high,low,i,mid;
    high=11;low=1;i=0;
    cout<<"choose any number :";
    cin>>num;
    while(low<=high && i==0){
        mid=(low+high)/2;
        if(num==arr[mid])
            i=mid;
        else if(num<arr[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    if(i==0)
        cout<<"Not in the list"<<endl;
    else
        cout<<"the index number is:"<<i+1<<endl;
    return 0;
}

