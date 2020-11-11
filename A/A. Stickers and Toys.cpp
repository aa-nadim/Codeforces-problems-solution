#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T,result=0;
    int a[3];
    cin>>T;
    while(T--){
            for(int i=0;i<3;i++)
                cin>>a[i];
            sort(a,a+3);
            result=a[2]-a[0];
            cout<<result+1<<endl;
    }
    return 0;
}

