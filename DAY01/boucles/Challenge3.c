#include <stdio.h>

int main() {
    int n , i ,s=0;
    printf("entrer la valeur de n");
    scanf("%d",&n);
    
    for(i = 1 ; i <= n ; i++){
     s = s + i;
     
    }
    printf("la somme de n:%d EST%d",n,s);
    return 0;
}








}