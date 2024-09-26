#include <stdio.h>

int main()
{
   int x , y , s ;
    printf("entrer la valeur de x:");
    scanf("%d",&x);
    printf("entrer la valeur y:");
    scanf("%d",&y);
    
    if (x == y){
    s = 3 * (x + y);
    }

    else
    s = (x + y);

    printf("la somme:%d",s);

return 0;

}