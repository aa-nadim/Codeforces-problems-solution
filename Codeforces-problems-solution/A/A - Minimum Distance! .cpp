#include<bits/stdc++.h>
#include<math.h>

using namespace std;
int main()
{
    int n,A,B;
    double R,o,S,sum;
    int arr[6];
    cin>>n;
    int j=1;
    while(j<=n){

        for(int i=0;i<6;i++){
            cin>>arr[i];
        }
        B=pow((arr[0]-arr[2]),2)+ pow((arr[1]-arr[3]),2);
        R=sqrt(B);
        A=pow((arr[2]-arr[4]),2)+pow((arr[3]-arr[5]),2);

        sum =A/(2.0*B);          //cout<<sum<<endl;
        o=acos(1-sum);      //cout<<o<<endl;
        S=R*o;
        cout<<"Case "<<j<<": "<<fixed<<setprecision(6)<<S<<endl;
        j++;
    }
    return 0;
}
