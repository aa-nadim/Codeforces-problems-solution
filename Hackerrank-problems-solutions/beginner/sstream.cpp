#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    char line[100];
    string S;
    gets(line);


    istringstream iS(line);

    while(iS>>S){
         cout<<S<<endl;
    }
    return 0;

}

