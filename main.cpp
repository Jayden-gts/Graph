#include <iostream>

typedef struct gEdge {
    int child, weight;
    struct gEdge *nextEdge;
}GEdge, *GEdgePtr ;

typedef struct{
    char id[CHAR_MAX+1], colour;
    int parent, cost, inDegree;
    GEdgePtr firstDegree;

}GVertex;