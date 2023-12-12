#include <stdio.h>

int main()
{
    int x;

    do
    {
        printf("enter\n");
        scanf("%d",&x);

        if(x<1 || x>7)
            printf("wrong\n");

    } while (x<1 || x>7);

    switch (x)
    {
    case 1:
        printf("satu");
        break;

    case 2:
        printf("sun");
        break;

    case 3:
        printf("mon");
        break;

    case 4:
        printf("tue");
        break;

    case 5:
        printf("wed");
        break;

    case 6:
        printf("thurs");
        break;

    case 7:
        printf("fri");
        break;
    }
    

    return 0;
}