#include <stdio.h>

int main()
{
    float c;
       printf("enterer la temperature en Celsius: ");
       scanf("%f", &c);
    if (c < 0) {
        printf("solid");
    } else if(c >= 0 && c < 100){
        printf("liquide");
    } else if(c > 100) {
        printf("gaz");
    }

      return 0;  
    }

   
