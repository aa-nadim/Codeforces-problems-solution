#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin>>year;

    if(1700<=year && year<=1917){
        if(year%4 == 0){
            cout<<"12"<<"."<<"09"<<"."<<year<<endl;
        }
        else
            cout<<"13"<<"."<<"09"<<"."<<year<<endl;

    }
    else if(year==1918)
        cout<<"26"<<"."<<"09"<<"."<<year<<endl;
    else if(1919<=year && year<=2700){

        if(year%400 == 0 || (year%100 != 0 && year%4 == 0)){
            cout<<"12"<<"."<<"09"<<"."<<year<<endl;
        }
        else
            cout<<"13"<<"."<<"09"<<"."<<year<<endl;
    }


  return 0;
}
