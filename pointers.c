#include <stdio.h>
#include <stdlib.h>

int main(){
	int tuna = 19;	
	int * pTuna = &tuna;
	
	printf("Address\t Name\t Value\n");

	printf("%p\t%s\t%d\n", pTuna, "tuna", tuna);
	
	printf("%p\t%s\t%d\n", &pTuna, "pTuna", pTuna);

	printf("\n*pTuna: %d\n", *pTuna);
	
	*pTuna = 71;
	
	printf("\n*pTuna: %d\n", *pTuna);
	
	printf("\ntuna: %d\n", tuna);
	
	return 0;
}