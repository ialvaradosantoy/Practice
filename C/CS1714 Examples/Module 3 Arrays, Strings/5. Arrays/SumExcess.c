#include <stdio.h>

int  main(int argc, char* argv[]){
	const int NUM_VALS = 4;
	int hourlyTemp[NUM_VALS];
	int i;
	
	for (i = 0; i < NUM_VALS; i++){
		scanf("%d", &(testGrades[i]));
	}
	for (i = 0; i < (NUM_VALS - 1); i++){
		printf("%d, ", hourlyTemp[i]);
	}
	printf("%d", hourlyTemp[NUM_VALS - 1]);
	return 0;  
}