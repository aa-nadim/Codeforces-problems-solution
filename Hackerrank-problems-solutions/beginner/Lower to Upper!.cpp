#include<stdio.h>
#include<string.h>

int main()
{

    int len,i,j,n,k;
    scanf("%d",&n);
    char str[100];

    for(k=0;k<=n;k++)
    {
        gets(str);
        len=strlen(str);

        if(k!=0)
        {
        printf("case %d:",k);
        }

        for(i=0;i<len;i++)
        {
            if(str[i]>=97&& str[i]<=122)
               j=str[i]-32;

            else if(str[i]==32)
                j=32;

            else if(str[i]>=65&& str[i]<=90)
                j=str[i];

            printf("%c",j);
        }
        printf("\n");
    }

    return 0;
}
