#include<stdio.h>
void main()
{
    int n,lower,upper,l,u;
    printf("enter the number\n");
    scanf("%d",&n);

      lower=n%10 * 10;
      upper=lower-10;
      printf("the range is between %d - %d",upper,lower);
      }
