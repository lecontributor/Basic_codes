#include<stdio.h>
void main()
{
    int n,lower,upper,l,u;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n>=1 && n<=99)
    {
      lower=n%10 * 10;
      upper=lower-10;
      printf("the range is between %d - %d",upper,lower);
    }
    else if(n>=100 && n<=999)
    {
        l=n/10*10;
        u=l+10;
        printf("the range is between %d - %d",l,u);
    }
    else
        printf("Bye");
}
