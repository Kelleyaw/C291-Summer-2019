/* * Prints out My name and state of birth * Author: Alexander Kelley
*/

#include <stdio.h>
#include <unistd.h>

int main(void) {
	// printf("Alexander Kelley, ", "Indiana");
	printf(" \"{Hello! Welcome to a Beautiful Summer @ IU!}, /\\ This is Summer 2019\'s 1st 6 Week Course\" ");
	printf("\n");
	int t = 0;
	While(1){
		if(t % 30 == 0){
			printf("Alexander Kelley")
		}
		int i;
		for(i = 0; i < 5; i++){
			t++;
			sleep(1);
			printf(".");
			fflush(stdout);
		}
		printf("\n");
	}
	return 0;
 }
}
