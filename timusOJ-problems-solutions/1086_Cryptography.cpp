#include<bits/stdc++.h>
using namespace std;
int arr[17000];

int main()
{
    int i,j,k=0,count1;
    int t,num;
    scanf("%d",&t);
    for(i=2; i<=170000; i++)
    {
        count1=0;
        for(j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                count1++;
                break;
            }
        }
        if(count1==0){
            arr[k++]=i;
        }
    }
    while(t--)
    {
    scanf("%d",&num);
        cout<<arr[num-1]<<endl;
    }

    return 0;
}
