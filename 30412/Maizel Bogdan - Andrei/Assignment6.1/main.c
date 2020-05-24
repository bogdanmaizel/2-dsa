#include "head.h"


int main() {
    FILE *input;
    input = fopen("input.txt", "r");
    int numberOfVertices;
    int **adjMatrix = readAdjMatrix(input, &numberOfVertices);
    //printMatrix(adjMatrix, numberOfVertices);
    printf("\nKruskal algorithm for MST:\n");
    kruskal(adjMatrix, numberOfVertices);
    adjMatrix = readAdjMatrix(input, &numberOfVertices);
    bellmanVolkswagen(1 ,adjMatrix, numberOfVertices);
    return 0;
}



