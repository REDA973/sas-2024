#include <stdio.h>

int main() 
{
   char c;
printf("enterer un caracter:");
scanf("%s",&c);
switch (c)
{
 case 'a':
   printf("caracter est une voyelle");
   break; 
  case 'o':
   printf("caracter est une voyelle");
   break; 
  case 'e':
   printf("caracter est une voyelle");
   break; 
  case 'u':
   printf("caracter est une voyelle");
   break; 
  case 'i':
   printf("caracter est une voyelle");
   break; 
  case 'y':
   printf("caracter est une voyelle");
   break; 
  default:
    printf("caractar c'est pas un voyelle");
}

return 0;
}