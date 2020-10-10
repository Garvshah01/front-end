#include <stdio.h>
int main()
{
    int age;
    int t=1,f=0;
    printf("enter age");
    scanf("%d",&age);
    if((age>18)?t:f)
    {
        printf("eligible");
    }
    else
    {
        printf("not");
    }
}
