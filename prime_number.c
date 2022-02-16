#include<stdio.h>
int main()
{
    int x,i,n=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
       if(x%i==0)
       n++;
    }
   if(n==2)
   {
    printf("prime");
    return 0;
   }
    else
   {
    printf("not a prime");
    return 0;
   }
  return 0;
}