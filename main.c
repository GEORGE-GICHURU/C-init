#include <stdio.h>

int main()
{
    char name[100];
    double deposits;
    int duration;
    double interest = 0.12; // the 12% interest
    double totalDeposits = 0;

    printf("Enter a customer name: ");
    scanf("%s", name);
    printf("Enter initial deposit amount: ");
    scanf("%1f", &deposits);
    printf("Enter the duration in years: ");
    scanf("%d", &duration);

    for (int i = 0; i < duration; i++)
    {
        totalDeposits += deposits;
        deposits += (deposits * interest);
    }

    printf("Total deposits for %s after %d is: %.2f\n", name, duration, totalDeposits);

    return 0;
}