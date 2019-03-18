#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int meatBalls[5] = {7,9,43,21,3}
	printf("Element\tAddress\tValue\n");
	for(i=0; i<5; i++){
		printf("meatBalls[%d]\t%p\t%d\n", &meatBalls[i], &meatBalls[i], meatBalls[i]);
	}
	//array names are just pointers to the first elements
	printf("\nmeatBalls\t\t%p\n", meatBalls);
	//dereference it
	printf("\n*meatBalls\t\t%p\n", *meatBalls);7
	printf("\n*(meatBalls+2)\t\t %d\n", *(meatBalls+2));
	return 0;
}