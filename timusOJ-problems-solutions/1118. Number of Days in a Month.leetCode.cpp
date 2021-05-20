#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfDays(int Y, int M) {
        int m=M;
        int year=Y;
    }
};

int main()
{

  if((year%400 == 0 || (year%100 != 0 && year%4 == 0)) && m==2)
        return 28;
  if(m==2)
         cout<<29<<endl;
  if(m==4 || m==6 || m==9 || m==11)
        cout<<30<<endl;
  if(m==1 || m==3 || m==5 ||)
    cout<<31<<endl;

  return 0;
}
