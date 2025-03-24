#include <iostream>

typedef struct gEdge {
    int child, weight;
    struct gEdge *nextEdge;
}gEdge, *gEdgePtr ;

