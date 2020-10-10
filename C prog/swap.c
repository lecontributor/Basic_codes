#include<stdio.h>
void main()
{
    int a,b,c,temp;
    printf("enter first number\n");
    scanf("%d",&a);
    printf("enter second number\n");
    scanf("%d",&b);
    printf("enter third number\n");
    scanf("%d",&c);
    temp=a;
    a=b;
    b=c;
    c=temp;
 //   a=a+b;
 //   b=a-b;
  //  a=a-b;
 //   c=a;
 //   a=b;
 //   b=c;
    printf("After swapping\n");
    printf("the a is = %d\n",a);
    printf("the b is = %d\n",b);
    printf("the c is = %d\n",c);

}
