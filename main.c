#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    printf("enter two integers\n");
    scanf("%2d %2d", &a, &b);
    if(a>b+1)
        for (i=b+1; i<a; i++){
            printf("%d\n", i);}
    else if(b>a+1)
        for (i=a+1; i<b; i++){
            printf("%d\n", i);}
    else
        printf("no numbers inbetween");

    return 0;
}
