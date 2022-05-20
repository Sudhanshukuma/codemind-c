#include<stdio.h>
int main()
{
    int n,p,m;
    scanf("%d%d",&n,&p);
    m=(n>p)?n:p;
    while(1)
    {
        if(m%n==0&&m%p==0)
        {
            printf("%d",m);
            break;
        }
        ++m;
    }
    return 0;
}