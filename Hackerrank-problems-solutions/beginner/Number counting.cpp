#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    //char line[] = "1 -2 10000 -50 20 7 445";
    char line[100000];

    int T;
    char *p,*e;
    long input;
    cin>>T;
    while(T--){
         scanf(" %[^\n]", line);
        int count = 0;
        p=line;

        for(p=line; ;p=e){
            input=strtol(p,&e,10);
            if(p==e)
                break;
            count++;
        }
        cout<<count<<endl;
    }

    return 0;
}
