#include<stdio.h>
int main()
{
    int hrs,min,sec,tsec;
    printf("enter the hours\n");
    scanf("%d",&hrs);
    printf("enter the minutes\n");
    scanf("%d",&min);
    printf("enter the seconds\n");
    scanf("%d",&sec);
    tsec=(hrs*3600)+(min*60)+(sec*1);
    printf("the total second is =%d",tsec);
}
