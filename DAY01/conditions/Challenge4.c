#include <stdio.h>
#include <math.h>
int main() 
{
 int a , b , c, delta , x1 , x2,x;
  printf("entrer la valeure de a :");
  scanf("%d",&a);
  printf("entrer la valeur de b : ");
  scanf("%d",&b);
  printf("entrer la valeur de c:");
  scanf("%d",&c);
   delta = pow(b ,2) - 4 * a * c;
   x1 = (- b - sqrt ( delta )) / 2 * a;
   x2 = (- b + sqrt (delta)) / 2 * a;
   x  = (- b) / 2 * a ; 
 if (delta > 0){
    
    printf("la valeur de x1:%d \n la valeur de x2:%d ",x1,x2);
 }
 else if (delta = 0)
 {
    printf("la valeur de x: %d",x);
 }
 else(delta < 0);
{
     printf("il as aucun solution");
 }

return 0;



}