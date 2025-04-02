#include <stdio.h>

int main(){
 
    char estado1 = 'rio de janeiro';
    char codigo1[10]= "carta01";
    char cidade1[20]="rio de janeiro";
    int populacao1= 6000000;
    float area1= 1.200;
    float pib1= 949.3;
    int pontos1= 58;
    
    char estado2 = 'sao paulo';
    char codigo2[10]= "carta02";
    char cidade2[20]="osasco";
    int populacao2= 11895578;
    float area2= 1.521;
    float pib2= 3.000000000000;
    int pontos2= 36;


if (populacao1 > populacao2){
printf("a populacao1 é maior que a populacao2\n");}
else{
    printf("a populacao2 é maior que a populacao1\n");
    
    if (pontos1 > pontos2){
        printf("a pontos1 é maior que a pontos2\n");}
        else{
            printf("a pontos2 é maior que a pontos1\n");

            if (pib1 > pib2){
                printf("a pib1 é maior que a pib2\n");}
                else{
                    printf("a pib2 é maior que a pib1\n");
        


return 0;
                }