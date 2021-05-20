#include <iostream>
using namespace std;

int main()
{
    int j,i=1;
    int n;
    cin>>j;
    if(j>10)
        return 0;

    else{
        while(i<=j){
            cin>>n;
            cout<<"Case "<<i<<":";
            for(int k=1;k<=n;k++){
                if(n%k==0)
                    cout<<" "<<k;
            }
            cout<<endl;
        i++;
        }
    }
    return 0;
}
