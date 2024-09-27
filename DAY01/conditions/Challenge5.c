#include <stdio.h>
int main() {
    int a , m , j , h , min , sec , n;
    printf("entrer les annes :");
    scanf("%d",&a);
    printf("mois-1\njour-2\nheure-3\nmin-4\nsec-5\nentrer un nombre entre 1-5 :");
    scanf("%d",&n);
    m = a * 12 ;
    j = a * 365 ;
    h = a * 8666 ; 
    min = a * 8666 * 60 ;
    sec = a * 8666 * 60 * 60 ;
    switch (n){
    case 1 : 
    printf("%d",m);
    break;
    case 2 : 
    printf("%d",j);
    break;
    case 3 : 
    printf("%d",h);
    break;
    case 4 : 
    printf("%d",min);
    break;
    case 5 : 
    printf("%d",sec);
    break;

    }

}