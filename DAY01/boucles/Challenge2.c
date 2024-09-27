#include <stdio.h>

int main(){

int Nombre,Fact=1,i;


printf("entrer un nombre :");
scanf("%d",&Nombre);

for(i = 2;i <= Nombre; i++){

    Fact=Fact*i;
}
printf("le fact de %d est %d ",Nombre,Fact);
 return 0;
}

