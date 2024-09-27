#include <stdio.h>

int main() {
    int b,a,h,p;
    printf("entrer la valeur de b:");
    scanf("%d",&b);
    printf("entrer la valeur de h:");
    scanf("%d",&h);
    a = (b * h) / 2;
    p = 3 * b;
    printf("calculer L'aire: %d \n ",a  );
    printf("calculer perimetre:%d",p);
    return 0;
}