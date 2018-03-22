#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "fun.h"

int main(){
	FILE *file;
	FILE *bitfile;
	FILE *newfile;
	int i=0, num;
	file = fopen("korolev_12_input.txt", "r");
	fscanf(file, "%d", &num);
	
	aeroflot *array = (aeroflot*) malloc ((num) * sizeof(aeroflot));
	while (fscanf (file, "%s%d%s", array[i].destination, &(array[i].number), array[i].brand) != EOF) {
		i++;
	}
	
	sort(array, num, bitfile, newfile);
	fclose(file);
	free(array);
	/*name(bitfile, array, newfile);
	free(array);*/
	array = (aeroflot*) malloc ((num) * sizeof(aeroflot));
	punkt3(array);
	free(array);
	punkt4(array);
	free(array);
	
	
}
