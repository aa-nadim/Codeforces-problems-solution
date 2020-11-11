#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<stdio.h>
#include<queue>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>
#include<utility>
using namespace std;
int main()
{
    string str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='0')
            count++;
        if(str[i]=='6')
            six++;
        if(str[i]=='1'&&str[i+1]=='2' || str[i]=='2'&&str[i+1]=='1')
            six2++;



    }
    if(count==0)
        cout<<"cyan"<<endl;


   return 0;
}


