#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dijktras.h"
#include "string_to_int.h"
#include "print_path.h"
#include "num_of_nodes.h"

extern void print_path(int start, int stop, int precede[]);
extern int str_to_int(char *str);
extern void dijkstra(int weight[NUM_OF_NODES][NUM_OF_NODES],int start,int stop,int *dist, int precede[]);

void check_input(int *value);

int main(){
    char buf[1000];
    char *buffer;
    int weight[NUM_OF_NODES][NUM_OF_NODES],precede[NUM_OF_NODES],dist;
    FILE *File = fopen("matrix.txt","r");

    if (File == NULL) {
      fprintf(stderr, "%s\n", "No file given!");
      exit(EXIT_FAILURE);
    }

    //reading the file.
    int c, i = 0;
    while ( (c = fgetc(File)) != EOF ) {
      if ( (c >= '0' && c <= '9') || (c == ' ') )
        buf[i++] = c;
      else if (c == '\t' || c == '\n' || c == '\r')
        buf[i++] = ' ';
    }
    buf[i] = '\0';
    fclose(File);


    //Convert the values in the matrix to actual numbers.
    buffer = strtok(buf," ");
    for(int i=0;i<NUM_OF_NODES;i++) {
        for(int j = 0; j<NUM_OF_NODES; j++) {
            weight[i][j] = str_to_int(buffer);
            buffer = strtok(NULL," ");
        }
    }

    for(int i=0;i<NUM_OF_NODES;i++) {
        for(int j = 0; j < NUM_OF_NODES; j++) {
            printf("%4d ",weight[i][j]);
        }
        printf("\n");
    }

  printf("\nEnter the starting node and the end node : ");
  int start,stop;
  scanf(" %d %d",&start,&stop);
  int values[] = {start,stop};
  check_input(values);

  dijkstra(weight,start,stop,&dist,precede);
  print_path(start,stop,precede);
  printf("The shortest distance from node %d to %d is : %d\n", start, stop, dist);
  return 0;
}

void check_input(int *edges) {
    for(int i = 0; i < 2; i++) {
        if(*edges < 0 || *edges > NUM_OF_NODES) {
            printf("%s %d\n","Invalid input:", *edges);
            exit(1);
        } else {
            edges++;
        }
    }
}
