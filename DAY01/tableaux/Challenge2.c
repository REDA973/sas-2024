#include <stdio.h>
 void main() {
int nombre;
printf("Enter the nombre de element: ");
scanf("%d", &nombre);
int arr[nombre];
for(int i = 0; i < nombre; i++) {
printf("Entrer le element: ");
scanf("%d", &arr[i]);
}
for(int i = 0; i < nombre; i++) {
printf("%d ", arr[i]);

if(i < nombre - 1) {
printf(", ");
}
}
}