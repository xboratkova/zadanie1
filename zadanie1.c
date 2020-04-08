#include <stdio.h>
#include <time.h>
#include <stdlib.h>





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
	printf("\nPriemer: %f", priemer);
	}
