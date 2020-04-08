#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void zmen_hodnoty(float *pole1, int pocet1){
	int i;
	float zmena;
	for(i=0; i<pocet1; i++){
		zmena = (float)rand()/(float)(RAND_MAX);
		if(i<(pocet1-1)){
		pole1[i]=pole1[i]-zmena;
		pole1[i+1]=pole1[i+1]+zmena;
		}
		else{
		pole1[i]=pole1[i]-zmena;
		pole1[0]=pole1[0]+zmena;
		}
	}
}


main(){
	int pocet, min, max;
	printf("Zadajte kolko ma byt prvkov v poli:\n");
	scanf("%d", &pocet);
	printf("Zadajte rozpatie pri nahodnych hodnotach:\n");
	printf("Minimum:\n");
	scanf("%d", &min);
	printf("Maximum:\n");
	scanf("%d", &max);
	
	float pole[pocet];
	
	int i;
	float priemer=0;
	
	srand(time(NULL));
	
	for(i=0; i<pocet; i++){
		pole[i]=min+(max-min)*(float)rand()/(float)RAND_MAX;
	}
	printf("Povodne pole: ");
	for(i=0; i<pocet; i++){
		printf("%f  ", pole[i]);
	}
	
	for(i=0; i<pocet; i++){
		priemer=priemer+pole[i];
	}
	priemer=priemer/pocet;
	printf("\nPriemer: %f\n", priemer);
	
	zmen_hodnoty(pole, pocet);
	float npriemer;
	for(i=0; i<pocet; i++){
		npriemer=npriemer+pole[i];
	}
	npriemer=npriemer/pocet;
	
	printf("Nove pole:  ");
	for(i=0; i<pocet; i++){
		printf("%f  ", pole[i]);
	}
	printf("\nNovy priemer: %f\n", npriemer);
	
	if(priemer=npriemer){
		printf("Zmena bola uspesna!");
	}
	else{
		printf("Niekde nastala chyba :(");
	}
	
	}
