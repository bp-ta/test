#include <stdio.h>

int main()
{
    int input;


    printf("enter\n");
    scanf("%d",&input);

    if((input/10)==0)
        printf("%d",-input);

    else if((input/100)==0)
        printf("%d",(input*input));

    else
        printf("%d", (input*input*input));




}