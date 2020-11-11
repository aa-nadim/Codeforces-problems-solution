#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,l,i,j,color=0;
    cin>>n;
    int a[101],arr[101];

    for(int i=0;i<n;i++)
        cin>>a[i];

    while(n--){

    sort(a,a+n);
    for(i=1;i<n;i++){
        if(a[i]%a[0]!=0)
            arr[j]=a[i];
    }
    color+=1;
    l=sizeof(arr);
    sort(arr,arr+l);
    for(j=1;j<l;j++){
        if(arr[j]%arr[0]!=0)
            a[i]=arr[j];
    }
    color+=1;
    l=sizeof(a);
   // n=l;
    }
    cout<<color<<endl;

    return 0;

}

