#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, howMany;
	int total;
	float average = 0.0;
	int * pointsArray;
	
	printf("How many numbers do you want to average?\n");
	scanf("%d", &howMany);
	
	pointsArray = (int*) malloc(howMany *sizeof(int));
	
	printf("Enter them boss!\n");
	
	for(i = 0; i<howMany; i++){
		scanf("%d", &pointsArray[i];
		total += pointsArray[i];
	}
	
	average = (float)total / (float)howMany;
	printf("Average is %.2f", average);
	
	return 0;
}