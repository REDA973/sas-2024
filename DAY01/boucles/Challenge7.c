#include <stdio.h>
#include <math.h>

int main(){
    int number ;
    int remainder ; 
    int reverse = 0;

    printf("enter the number ");
    scanf("%d",&number);
     while(number!=0)  {
     remainder = number % 10 ;
     reverse = reverse *10 + remainder;
     number = number / 10;
     }
    printf("the reverse of the number is  %d",reverse);


    return 0;
}