#include<stdio.h>
int main()
{
    int n,i,p=0;
     scanf("%d",&n);
    int s[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    i=0;
    while(i<n)
    {
       if(s[i]==1)
       {
          p++;
           //printf("hard\n");
       }

        if (p==1)
            break;
i++;
    }
    if(p==1)
    {
        printf("hard\n");
    }
    else{ printf("easy\n");}
}
