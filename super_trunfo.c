#include <stdio.h>

int main(){
// SUPER TRUNFO - NÍVEL NOVATO

//VARIAVEIS CARTA 1
char estado1;
char codigo_carta1[5]; 
char nome_cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos_turisticos1;

//VARIAVEIS CARTA 2
char estado2;
char codigo_carta2[5]; 
char nome_cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos_turisticos2;

//CADASTRO CARTA 1
printf("CARTA 1: \n");

printf("Estado de A a H: \n");
scanf(" %c", &estado1);

printf("Código da Carta (ex.:A01): \n");
scanf(" %s", &codigo_carta1);

printf("Nome da Cidade: \n");
scanf(" %s", &nome_cidade1);

printf("Populacao: \n");
scanf(" %d", &populacao1);

printf("Área (em KM) \n");
scanf(" %f", &area1);

printf("PIB (em BI de Reais): \n");
scanf(" %f", &pib1);

printf("Número de pontos turísticos: \n");
scanf(" %d", &pontos_turisticos1);

printf("\n\n");

//CADASTRO CARTA 2
printf("CARTA 2: \n");

printf("Estado de A a H: \n");
scanf(" %c", &estado2);

printf("Código da Carta (ex.A01): \n");
scanf(" %s", &codigo_carta2);

printf("Nome da Cidade: \n");
scanf(" %s", &nome_cidade2);

printf("Populacao: \n");
scanf(" %d", &populacao2);

printf("Área (em KM) \n");
scanf(" %f", &area2);

printf("PIB (em BI de Reais): \n");
scanf(" %f", &pib2);

printf("Número de pontos turísticos: \n");
scanf(" %d", &pontos_turisticos2);

printf("\n\n");

//EXIBIÇÃO CARTA 1
 printf("\n--- Informacoes da Carta 1 ---\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo_carta1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %d\n", populacao1);
printf("Área: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Número de pontos turísticos: %d\n", pontos_turisticos1);

printf("\n\n");

//EXIBIÇÃO CARTA 2
 printf("\n--- Informacoes da Carta 2 ---\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo_carta2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Número de pontos turísticos: %d\n", pontos_turisticos2);

 return 0;
}
