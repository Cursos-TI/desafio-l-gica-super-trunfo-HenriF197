#include <stdio.h>

int main () {

char estado[30] = "SP";
char codigodaCarta[30] = "A01";
char nomedaCidade[30] = "Osasco";
int populacao = 13;
float area = 64.94;
float PIB = 86.10;
int Numeropontosturisticos = 13;

printf ("Estado: %s \n", estado);
printf ("Codigo da carta: %s \n", codigodaCarta);
printf ("Nome da cidade: %s \n", nomedaCidade);
printf ("População: %d milhões \n", populacao);
printf ("Área: %.2f km²\n", area);
printf ("PIB: %.2f reais \n", PIB);
printf ("Número de pontos turísticos: %d \n", Numeropontosturisticos);
printf ("Densidade populacional: %.2f km² \n", populacao / area);
printf ("PIB per capita: %.2f reais \n", PIB / populacao);


char Estado[30] = "RJ";
char CodigodaCarta[30] = "A02";
char NomedaCidade[30] = "Angra dos Reis";
int Populacao = 9;
float Area = 81.31;
float PiB = 53.26;
int NumeropontosTuristicos = 15;

printf ("Estado: %s \n", Estado);
printf ("Codigo da carta: %s \n", CodigodaCarta);
printf ("Nome da cidade: %s \n", NomedaCidade);
printf ("População: %d milhões \n", Populacao);
printf ("Área: %.2f km²\n", Area);
printf ("PIB: %.2f reais \n", PiB);
printf ("Número de pontos turísticos: %d \n", NumeropontosTuristicos);
printf ("Densidade populacional: %.2f km² \n", Populacao / Area);
printf ("PIB per capita: %.2f reais \n", PiB / Populacao);


if (populacao > Populacao){

    printf ("Carta 1 Venceu! \n");
} else {
printf (" Carta 2 venceu! \n");

}

return 0;

}

