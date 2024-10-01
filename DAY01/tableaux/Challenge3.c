#include <stdio.h>

int main() {
    int  taille,i,s ;
    
    printf("entrer taille : ");
    scanf("%d",&taille);

    int t[taille];
    for(i=0 ;i < taille;i++ ) {
        printf("entrer les element : ");
        scanf("%d",&t[i]);
    }
    
    for(i = 1; i <= taille ; i++) {
        s =  s + i ;
        printf( "%d ", i);
        
    }
        printf(" \nla somme est:%d ",s);
    return 0;
}