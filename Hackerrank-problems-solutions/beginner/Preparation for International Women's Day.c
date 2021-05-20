#include<stdio.h>
int main()
{
    //int n=7,k=2;
    //scanf("%d%d",&n,&k);
    int i,count=0,j,a[]={1, 2, 2, 3, 2, 4, 10};


    for(i=0;i<7;i++)
    {
       j=0;
        while(j<7)
            {
             if((a[j]+a[j+1])%2==0)
                 count=count+1;
               //printf("%d\n",count);  //break;
            }
            printf("%d\n",count);
            j++;
    }
    printf("%d",count);

    return 0;
}
