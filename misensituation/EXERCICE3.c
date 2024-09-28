#include <stdio.h>

int main() {
 int i , n ;
 printf ("Entrée un nomber :");
 scanf ("%d" , &n);
      for(i=2; i<n ;i++){

  if( n % i == 0 ){
    printf ("Ce n'est pas un nomber primer");
    break;
  }

else{
       printf ("C'est un nomber primer");
break;

}

      }

      return 0;

}