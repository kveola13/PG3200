#include <stdio.h>
#include <stdlib.h>

int main(){
	char movie1[] = "The Return of Buckyman!";
	char * movie2 = "Bucky is awesome I love ham";
	
	puts(movie2);
	movie2 = "new movie2";
	puts(movie2);
	
	return 0;
}