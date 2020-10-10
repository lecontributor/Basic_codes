#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    char s1[100];
    int x;
    double y;
    scanf("%d",&x);
    scanf("%0.1lf",&y);
    scanf("%[^\n]s",&s1);
    printf("%d\n",i+x);
    printf("%0.1lf\n",d+y);
    printf("%s",s);
    printf("%s",s1);

return 0;
}
