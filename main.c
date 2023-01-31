#include <stdio.h>
int main()
{
    int a;
    printf("Enter minutes to convert it into hours and minutes format");
    scanf("%d",&a);
    printf("%d Hours %d Minutes",a/60,a%60);

    return 0;
}