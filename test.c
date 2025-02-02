#include <stdio.h>
int main()
{
    int gallon;
    float litre;

    for (gallon = 10; gallon <= 16; gallon += 2)
    {
        litre = gallon * 3.785; // Convert gallon to litre
        printf("For %d gallons, the equivalent in litres is: %.2f\n", gallon, litre);
    }

    return 0;
}
