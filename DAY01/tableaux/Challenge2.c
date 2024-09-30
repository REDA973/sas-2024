#include <stdio.h>

int main() {
    int  taille,i ;
    
    printf("entrer taille : ");
    scanf("%d",&taille);

    int t[taille];
    for(i=0 ;i < taille;i++ )
    {
        printf("entrer les element : ");
        scanf("%d",&t[i]);
        }
        for(i=0; i < taille ; i++)
        {
            printf("{ %d  }",t[i]);
            }
    return 0;
}