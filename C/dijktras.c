#include <stdbool.h>
#include <limits.h>

#include "num_of_nodes.h"

void dijkstra(int weight[NUM_OF_NODES][NUM_OF_NODES],int start,int stop,int *dist, int precede[]) {
	int distance[NUM_OF_NODES],visited[NUM_OF_NODES];
	int current,currentIndex,distanceCount;
	int smalldist,newdist;

	for (int i = 0; i < NUM_OF_NODES; i++) {
		visited[i] = false;
		distance[i] = INT_MAX;
	}

	visited[start] = true;
	distance[start] = 0;
	current = start;

    while (current != stop) {
        smalldist = INT_MAX;
        distanceCount = distance[current];
        for (int i = 0; i < NUM_OF_NODES; i++) {
            if (visited[i] == false) {
                newdist = distanceCount + weight[current][i];
                if (newdist < distance[i]) {
                    distance[i] = newdist; // Count the updated distance
                    precede[i] = current;
                }
                if (distance[i] < smalldist) {
                    smalldist = distance[i];
                    currentIndex = i;
                }
            }
        }
        current = currentIndex;
        visited[current] = true;
    }
	*dist = distance[stop];
}
