#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
        int T;
        double AB, AC, BC, ADE, ra, s, area, a, z, AD;
        cin>>T;

        for (int i = 1; i <= T; i++){
            cin>>AB>>AC>>BC>>ra;
            s=(AB+AC+BC)/2;
            area=sqrt(s*(s-AB)*(s-AC)*(s-BC));
            a=2*area/(AB*AC);
            ADE=area*ra/(1+ra);
            z=AB/AC;
            AD=sqrt((2*ADE*z)/a);
            //cout<<"Case "<<i<<": "<<AD<<endl;
            cout<<"Case "<<i<<": "<<fixed<<setprecision(6)<<AD<<endl;
        }

 return 0;
}
