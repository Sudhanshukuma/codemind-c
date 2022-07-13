#include<stdio.h>
int main()
{
    int i,j,k,n,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(j=0;j<k;j++)
    {
        s=s+a[j];
    }
    printf("%d",s);
    return 0;
}