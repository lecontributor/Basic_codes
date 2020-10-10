#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter four no..\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is maximum\n",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is maximum\n",b);
    }
    else if(c>a && c>b && c>d)
       {
        printf("%d is maximum\n",c);
       }
    else
        printf("%d is maximum\n",d);
}
