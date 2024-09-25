#include <stdio.h>

int main()
{   
    float ms,kmh;
    printf("entrer la vitesse en km/h: ");
    scanf("%f",&kmh );
    ms = kmh * 0.27778 ;
    printf("la vitesse en m/s:%.5f",ms);
return 0;

}
