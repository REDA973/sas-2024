#include <stdio.h>
#include <math.h>
int main() {
    int  base , exposant,i,result ;
    printf("entrer la valeur de la base: ");
    scanf("%d",&base);
    printf("entrer la valeur de la exposant: ");
    scanf("%d",&exposant);E
    
    result = pow(base ,exposant);

for(i = 1;i <= exposant ; i++){

    base = base * i;
}
printf("result : %d  ",result);
 return 0;
}
