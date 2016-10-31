#ifndef DIJKTAS_H_
#define DIJKTAS_H_
#include "num_of_nodes.h"

void dijkstra(int weight[NUM_OF_NODES][NUM_OF_NODES], int start, int stop, int *pd, int precede[]);

#endif

