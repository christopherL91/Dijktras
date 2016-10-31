#include <stdio.h>

void print_path(int start, int stop, int precede[]){

	int current = stop;
	int i = 0;
	//number of paths
	int number_buffer[50];

	while(current != start){
		number_buffer[i++] = current;
		current = precede[current];
	}

	number_buffer[i] = current;

	for (; i > 0; i--) {
		printf("%d -> ", number_buffer[i]);
	}
	printf("%d\n", number_buffer[i]);
}
