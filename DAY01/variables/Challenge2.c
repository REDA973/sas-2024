#include <stdio.h>

int main()
{
    float kelvin,celsius;
    printf("entrerla temperatur en celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius+273,15;
    printf("la teperatur en kelvin:%.2f",kelvin);
return 0;

}