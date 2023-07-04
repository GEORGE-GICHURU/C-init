// using for loop to add numbers from 1 to 10 inclusively
#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += 1;
    }

    printf("The sum of numbers from 1 to 10 is: %d\n", sum);

    return 0;
}

// count 1 to 10 using for, while and do-while loops

// for
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d", i);
    }
    return 0;
}

// while
int main()
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}

// do-while

int main()
{
    int i = 1;
    do
    {
        printf("%d", i);
        i++;
    } while (i <= 10);

    return 0;
}