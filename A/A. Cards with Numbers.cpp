#include<cstdio>
int a[5001],b[600001],n,k,x,i;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    scanf("%d",&n);n<<=1;
    for(i=1;i<=n;++i){ scanf("%d",&x);
        if (a[x]>0) b[k++]=a[x],b[k++]=i,a[x]=0;
        else a[x]=i;
    }
    if(k!=n) puts("-1");
    else for(i=0;i<k;i+=2) printf("%d %d\n",b[i+1],b[i]);

    return 0;
}
