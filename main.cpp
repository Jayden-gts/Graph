#include <iostream>
#define MaxVer 100
#define MaxSize 100


typedef struct gEdge {
    int child, weight;
    struct gEdge *nextEdge;
}GEdge, *GEdgePtr ;

typedef struct{
    char id[MaxSize+1], colour;
    int parent, cost, inDegree;
    GEdgePtr firstDegree;

}GVertex;

typedef struct graph {
    int numV;
    GVertex vertex[MaxVer+1];
}*Graph;