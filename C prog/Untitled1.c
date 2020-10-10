#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,aggr,per;
    printf("enter the marks of first subject\n");
    scanf("%d",&m1);
    printf("enter the marks of second subject\n");
    scanf("%d",&m2);
    printf("enter the marks of third subject\n");
    scanf("%d",&m3);
    printf("enter the marks of fourth subject\n");
    scanf("%d",&m4);
    printf("enter the marks of fifth subject\n");
    scanf("%d",&m5);
    aggr=m1+m2+m3+m4+m5;
    per=(aggr*100)/500;
    printf("the aggregate marks is = %d\n",aggr);
    printf("the percentage is=%d",per);
}
