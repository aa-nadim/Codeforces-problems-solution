#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,s1=1,s2=1;

    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                cout<<arr[i]<<endl;
                continue;
            }
            else if(arr[i]%2==0)
            {
                cout<<arr[i]/2<<endl;
            }
            else if(arr[i]<0)
            {
                if(s1%2!=0)
                {
                    cout<<(arr[i]/2)-1<<endl;
                }
                else
                {
                    cout<<(arr[i]/2)<<endl;
                }
                s1++;
            }
            else
            {

                if(s2%2!=0)
                {
                    cout<<(arr[i]/2)+1<<endl;
                }
                else
                {
                    cout<<(arr[i]/2)<<endl;
                }
                s2++;
            }

    }

    return 0;
}
