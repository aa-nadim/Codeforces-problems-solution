#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    unsigned long long int n,m,a,temp;;
    scanf("%llu%llu%llu",&n,&m,&a);
    if(n<m)
    {
        temp=n;
        n=m;
        m=temp;
    }
    if(a==1)
        cout<<n*m<<endl;
    else if(n<=a && m<=a)
        printf("1\n");

    else if(n%a==0 && m<=a)
        printf("%llu\n",n/a);

    else if(n%a==0 && m>a)
        printf("%llu\n",(n/a)*(m/a+1));

    else if(m%a==0&&n<=a)
        printf("%llu\n",m/a);

    else if(m%a==0 && n>a)
        printf("%llu\n",(m/a)*(n/a+1));

    else if(n%a==0&&m%a==0)
        printf("%llu\n",(n/a)*(m/a));

    else if(n>a&&m<=a)
        printf("%llu\n",n/a+1);

    else if(m>a&&n<=a)
        printf("%llu\n",m/a+1);

    else if(n>a&&m>a)
        printf("%llu\n",(n/a+1)*(m/a+1));

    return 0;
}
