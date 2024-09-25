#include <stdio.h>

int main()
 {
    char nom[20], prenom[20], sexe[10], email[40];
    int age;
    
    printf("enter your nom:");
    scanf("%s", &nom);
    printf("enter your prenom:");
    scanf("%s", &prenom);
    printf("enter your sexe:");
    scanf("%s", &sexe);
    printf("enter your email:");
    scanf("%s", &nom);
    printf("enter your age:");
    scanf("%d", &age);
    
    printf("nom:%s\nprenom:%s\nsexe:%s\nemail:%s\nage:%d", nom,prenom,sexe,email,age);

    return 0;
}