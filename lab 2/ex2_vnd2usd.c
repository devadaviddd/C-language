#include <stdio.h>

/* Get an amount in VND then convert it to USD. Assume that the exchange rate of 1 USD 
to VND is 23,150 VND.
*/
int main()
{
    float VND, USD;

    //Input amount in VND
    printf("Type the amount of VND you enter to convert to USD: ");
    scanf("%f", &VND);

    //Convert into USD and print out
    USD = VND / 23150;
    printf("%.2f VND to %.2f USD", VND, USD);

    return 0;
}