 #include <stdio.h>
int main()
{
    float t ;
    printf("entrer la temperature:");
    scanf("%f",t);

    if(t < 38 )
       printf(" votre temperature est normal");
    else if(t >= 38)
    printf("vous avez de la fievre");
return 0;


}