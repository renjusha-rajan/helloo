#include<stdio.h>
#include"add.h"

int main()
{
        int a,b;
        printf("enter 2 numbers");
        scanf("%d %d",&a,&b);
        printf("sum is : %d",add(a,b));

        return 0;
}
