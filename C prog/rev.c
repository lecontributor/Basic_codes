#include<stdio.h>
void main()
{
    int rev=0,n;
    scanf("%d",&n);
    while(n!=0)
    {
     rev=rev*10;
     rev=rev + n%10;
     n=n/10;
    }
    printf("%d",rev);


}
