#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char line[] = "1 -2 10000 -50 20 7 445";

    char *p,*e;
    long input;
    int count = 0;
    p=line;

    for(p=line; ;p=e){
        input=strtol(p,&e,10);
        if(p==e)
            break;
        count++;

    }
    cout<<count<<endl;

    return 0;
}
