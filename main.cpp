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

//function to create a new edge
GEdgePtr newGEdge(int c, int w) {
    GEdgePtr p = (GEdgePtr)malloc(sizeof(GEdge));
    p->child = c;
    p->weight=w;
    p->nextEdge=nullptr;
    return p;
}